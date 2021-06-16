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

#include "changetagsforresourceresponse.h"
#include "changetagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ChangeTagsForResourceResponse
 * \brief The ChangeTagsForResourceResponse class provides an interace for Route53 ChangeTagsForResource responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::changeTagsForResource
 */

/*!
 * Constructs a ChangeTagsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ChangeTagsForResourceResponse::ChangeTagsForResourceResponse(
        const ChangeTagsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ChangeTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new ChangeTagsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ChangeTagsForResourceRequest * ChangeTagsForResourceResponse::request() const
{
    Q_D(const ChangeTagsForResourceResponse);
    return static_cast<const ChangeTagsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ChangeTagsForResource \a response.
 */
void ChangeTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ChangeTagsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ChangeTagsForResourceResponsePrivate
 * \brief The ChangeTagsForResourceResponsePrivate class provides private implementation for ChangeTagsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ChangeTagsForResourceResponsePrivate object with public implementation \a q.
 */
ChangeTagsForResourceResponsePrivate::ChangeTagsForResourceResponsePrivate(
    ChangeTagsForResourceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ChangeTagsForResource response element from \a xml.
 */
void ChangeTagsForResourceResponsePrivate::parseChangeTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeTagsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
