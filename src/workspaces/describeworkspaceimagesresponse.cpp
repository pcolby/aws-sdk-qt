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

#include "describeworkspaceimagesresponse.h"
#include "describeworkspaceimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceImagesResponse
 * \brief The DescribeWorkspaceImagesResponse class provides an interace for WorkSpaces DescribeWorkspaceImages responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceImages
 */

/*!
 * Constructs a DescribeWorkspaceImagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceImagesResponse::DescribeWorkspaceImagesResponse(
        const DescribeWorkspaceImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspaceImagesResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceImagesRequest * DescribeWorkspaceImagesResponse::request() const
{
    Q_D(const DescribeWorkspaceImagesResponse);
    return static_cast<const DescribeWorkspaceImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeWorkspaceImages \a response.
 */
void DescribeWorkspaceImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceImagesResponsePrivate
 * \brief The DescribeWorkspaceImagesResponsePrivate class provides private implementation for DescribeWorkspaceImagesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceImagesResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceImagesResponsePrivate::DescribeWorkspaceImagesResponsePrivate(
    DescribeWorkspaceImagesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeWorkspaceImages response element from \a xml.
 */
void DescribeWorkspaceImagesResponsePrivate::parseDescribeWorkspaceImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
