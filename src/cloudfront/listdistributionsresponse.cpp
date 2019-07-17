/*
    Copyright 2013-2019 Paul Colby

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

#include "listdistributionsresponse.h"
#include "listdistributionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsResponse
 * \brief The ListDistributionsResponse class provides an interace for CloudFront ListDistributions responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributions
 */

/*!
 * Constructs a ListDistributionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsResponse::ListDistributionsResponse(
        const ListDistributionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsRequest * ListDistributionsResponse::request() const
{
    Q_D(const ListDistributionsResponse);
    return static_cast<const ListDistributionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributions \a response.
 */
void ListDistributionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsResponsePrivate
 * \brief The ListDistributionsResponsePrivate class provides private implementation for ListDistributionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsResponsePrivate object with public implementation \a q.
 */
ListDistributionsResponsePrivate::ListDistributionsResponsePrivate(
    ListDistributionsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributions response element from \a xml.
 */
void ListDistributionsResponsePrivate::parseListDistributionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
