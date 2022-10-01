// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "changecidrcollectionresponse.h"
#include "changecidrcollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ChangeCidrCollectionResponse
 * \brief The ChangeCidrCollectionResponse class provides an interace for Route53 ChangeCidrCollection responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::changeCidrCollection
 */

/*!
 * Constructs a ChangeCidrCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
ChangeCidrCollectionResponse::ChangeCidrCollectionResponse(
        const ChangeCidrCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ChangeCidrCollectionResponsePrivate(this), parent)
{
    setRequest(new ChangeCidrCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ChangeCidrCollectionRequest * ChangeCidrCollectionResponse::request() const
{
    Q_D(const ChangeCidrCollectionResponse);
    return static_cast<const ChangeCidrCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ChangeCidrCollection \a response.
 */
void ChangeCidrCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ChangeCidrCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ChangeCidrCollectionResponsePrivate
 * \brief The ChangeCidrCollectionResponsePrivate class provides private implementation for ChangeCidrCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ChangeCidrCollectionResponsePrivate object with public implementation \a q.
 */
ChangeCidrCollectionResponsePrivate::ChangeCidrCollectionResponsePrivate(
    ChangeCidrCollectionResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ChangeCidrCollection response element from \a xml.
 */
void ChangeCidrCollectionResponsePrivate::parseChangeCidrCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeCidrCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
