// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcidrcollectionresponse.h"
#include "createcidrcollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateCidrCollectionResponse
 * \brief The CreateCidrCollectionResponse class provides an interace for Route53 CreateCidrCollection responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createCidrCollection
 */

/*!
 * Constructs a CreateCidrCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCidrCollectionResponse::CreateCidrCollectionResponse(
        const CreateCidrCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateCidrCollectionResponsePrivate(this), parent)
{
    setRequest(new CreateCidrCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCidrCollectionRequest * CreateCidrCollectionResponse::request() const
{
    Q_D(const CreateCidrCollectionResponse);
    return static_cast<const CreateCidrCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateCidrCollection \a response.
 */
void CreateCidrCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCidrCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateCidrCollectionResponsePrivate
 * \brief The CreateCidrCollectionResponsePrivate class provides private implementation for CreateCidrCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateCidrCollectionResponsePrivate object with public implementation \a q.
 */
CreateCidrCollectionResponsePrivate::CreateCidrCollectionResponsePrivate(
    CreateCidrCollectionResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateCidrCollection response element from \a xml.
 */
void CreateCidrCollectionResponsePrivate::parseCreateCidrCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCidrCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
