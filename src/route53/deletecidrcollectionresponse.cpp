// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecidrcollectionresponse.h"
#include "deletecidrcollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteCidrCollectionResponse
 * \brief The DeleteCidrCollectionResponse class provides an interace for Route53 DeleteCidrCollection responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteCidrCollection
 */

/*!
 * Constructs a DeleteCidrCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCidrCollectionResponse::DeleteCidrCollectionResponse(
        const DeleteCidrCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteCidrCollectionResponsePrivate(this), parent)
{
    setRequest(new DeleteCidrCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCidrCollectionRequest * DeleteCidrCollectionResponse::request() const
{
    Q_D(const DeleteCidrCollectionResponse);
    return static_cast<const DeleteCidrCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteCidrCollection \a response.
 */
void DeleteCidrCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCidrCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteCidrCollectionResponsePrivate
 * \brief The DeleteCidrCollectionResponsePrivate class provides private implementation for DeleteCidrCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteCidrCollectionResponsePrivate object with public implementation \a q.
 */
DeleteCidrCollectionResponsePrivate::DeleteCidrCollectionResponsePrivate(
    DeleteCidrCollectionResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteCidrCollection response element from \a xml.
 */
void DeleteCidrCollectionResponsePrivate::parseDeleteCidrCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCidrCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
