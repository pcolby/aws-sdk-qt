/*
    Copyright 2013-2021 Paul Colby

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

#include "deletereusabledelegationsetresponse.h"
#include "deletereusabledelegationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteReusableDelegationSetResponse
 * \brief The DeleteReusableDelegationSetResponse class provides an interace for Route53 DeleteReusableDelegationSet responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteReusableDelegationSet
 */

/*!
 * Constructs a DeleteReusableDelegationSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReusableDelegationSetResponse::DeleteReusableDelegationSetResponse(
        const DeleteReusableDelegationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteReusableDelegationSetResponsePrivate(this), parent)
{
    setRequest(new DeleteReusableDelegationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReusableDelegationSetRequest * DeleteReusableDelegationSetResponse::request() const
{
    return static_cast<const DeleteReusableDelegationSetRequest *>(Route53Response::request());
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteReusableDelegationSet \a response.
 */
void DeleteReusableDelegationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReusableDelegationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteReusableDelegationSetResponsePrivate
 * \brief The DeleteReusableDelegationSetResponsePrivate class provides private implementation for DeleteReusableDelegationSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteReusableDelegationSetResponsePrivate object with public implementation \a q.
 */
DeleteReusableDelegationSetResponsePrivate::DeleteReusableDelegationSetResponsePrivate(
    DeleteReusableDelegationSetResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteReusableDelegationSet response element from \a xml.
 */
void DeleteReusableDelegationSetResponsePrivate::parseDeleteReusableDelegationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReusableDelegationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
