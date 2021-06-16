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

#include "listcachepoliciesresponse.h"
#include "listcachepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListCachePoliciesResponse
 * \brief The ListCachePoliciesResponse class provides an interace for CloudFront ListCachePolicies responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listCachePolicies
 */

/*!
 * Constructs a ListCachePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCachePoliciesResponse::ListCachePoliciesResponse(
        const ListCachePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListCachePoliciesResponsePrivate(this), parent)
{
    setRequest(new ListCachePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCachePoliciesRequest * ListCachePoliciesResponse::request() const
{
    Q_D(const ListCachePoliciesResponse);
    return static_cast<const ListCachePoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListCachePolicies \a response.
 */
void ListCachePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCachePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListCachePoliciesResponsePrivate
 * \brief The ListCachePoliciesResponsePrivate class provides private implementation for ListCachePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListCachePoliciesResponsePrivate object with public implementation \a q.
 */
ListCachePoliciesResponsePrivate::ListCachePoliciesResponsePrivate(
    ListCachePoliciesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListCachePolicies response element from \a xml.
 */
void ListCachePoliciesResponsePrivate::parseListCachePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCachePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
