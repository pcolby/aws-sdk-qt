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

#include "describeclientpropertiesresponse.h"
#include "describeclientpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeClientPropertiesResponse
 * \brief The DescribeClientPropertiesResponse class provides an interace for WorkSpaces DescribeClientProperties responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeClientProperties
 */

/*!
 * Constructs a DescribeClientPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClientPropertiesResponse::DescribeClientPropertiesResponse(
        const DescribeClientPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeClientPropertiesResponsePrivate(this), parent)
{
    setRequest(new DescribeClientPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClientPropertiesRequest * DescribeClientPropertiesResponse::request() const
{
    Q_D(const DescribeClientPropertiesResponse);
    return static_cast<const DescribeClientPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeClientProperties \a response.
 */
void DescribeClientPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClientPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeClientPropertiesResponsePrivate
 * \brief The DescribeClientPropertiesResponsePrivate class provides private implementation for DescribeClientPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeClientPropertiesResponsePrivate object with public implementation \a q.
 */
DescribeClientPropertiesResponsePrivate::DescribeClientPropertiesResponsePrivate(
    DescribeClientPropertiesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeClientProperties response element from \a xml.
 */
void DescribeClientPropertiesResponsePrivate::parseDescribeClientPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClientPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
