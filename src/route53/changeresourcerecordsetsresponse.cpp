/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "changeresourcerecordsetsresponse.h"
#include "changeresourcerecordsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ChangeResourceRecordSetsResponse
 * \brief The ChangeResourceRecordSetsResponse class provides an interace for Route53 ChangeResourceRecordSets responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::changeResourceRecordSets
 */

/*!
 * Constructs a ChangeResourceRecordSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ChangeResourceRecordSetsResponse::ChangeResourceRecordSetsResponse(
        const ChangeResourceRecordSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ChangeResourceRecordSetsResponsePrivate(this), parent)
{
    setRequest(new ChangeResourceRecordSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ChangeResourceRecordSetsRequest * ChangeResourceRecordSetsResponse::request() const
{
    Q_D(const ChangeResourceRecordSetsResponse);
    return static_cast<const ChangeResourceRecordSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ChangeResourceRecordSets \a response.
 */
void ChangeResourceRecordSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ChangeResourceRecordSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ChangeResourceRecordSetsResponsePrivate
 * \brief The ChangeResourceRecordSetsResponsePrivate class provides private implementation for ChangeResourceRecordSetsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ChangeResourceRecordSetsResponsePrivate object with public implementation \a q.
 */
ChangeResourceRecordSetsResponsePrivate::ChangeResourceRecordSetsResponsePrivate(
    ChangeResourceRecordSetsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ChangeResourceRecordSets response element from \a xml.
 */
void ChangeResourceRecordSetsResponsePrivate::parseChangeResourceRecordSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeResourceRecordSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
