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

#include "liststreamingdistributionsresponse.h"
#include "liststreamingdistributionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListStreamingDistributionsResponse
 * \brief The ListStreamingDistributionsResponse class provides an interace for CloudFront ListStreamingDistributions responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listStreamingDistributions
 */

/*!
 * Constructs a ListStreamingDistributionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamingDistributionsResponse::ListStreamingDistributionsResponse(
        const ListStreamingDistributionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListStreamingDistributionsResponsePrivate(this), parent)
{
    setRequest(new ListStreamingDistributionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamingDistributionsRequest * ListStreamingDistributionsResponse::request() const
{
    return static_cast<const ListStreamingDistributionsRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront ListStreamingDistributions \a response.
 */
void ListStreamingDistributionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamingDistributionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListStreamingDistributionsResponsePrivate
 * \brief The ListStreamingDistributionsResponsePrivate class provides private implementation for ListStreamingDistributionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListStreamingDistributionsResponsePrivate object with public implementation \a q.
 */
ListStreamingDistributionsResponsePrivate::ListStreamingDistributionsResponsePrivate(
    ListStreamingDistributionsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListStreamingDistributions response element from \a xml.
 */
void ListStreamingDistributionsResponsePrivate::parseListStreamingDistributionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamingDistributionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
