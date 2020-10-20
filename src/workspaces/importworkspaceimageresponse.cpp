/*
    Copyright 2013-2020 Paul Colby

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

#include "importworkspaceimageresponse.h"
#include "importworkspaceimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ImportWorkspaceImageResponse
 * \brief The ImportWorkspaceImageResponse class provides an interace for WorkSpaces ImportWorkspaceImage responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::importWorkspaceImage
 */

/*!
 * Constructs a ImportWorkspaceImageResponse object for \a reply to \a request, with parent \a parent.
 */
ImportWorkspaceImageResponse::ImportWorkspaceImageResponse(
        const ImportWorkspaceImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ImportWorkspaceImageResponsePrivate(this), parent)
{
    setRequest(new ImportWorkspaceImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportWorkspaceImageRequest * ImportWorkspaceImageResponse::request() const
{
    Q_D(const ImportWorkspaceImageResponse);
    return static_cast<const ImportWorkspaceImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ImportWorkspaceImage \a response.
 */
void ImportWorkspaceImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportWorkspaceImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ImportWorkspaceImageResponsePrivate
 * \brief The ImportWorkspaceImageResponsePrivate class provides private implementation for ImportWorkspaceImageResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ImportWorkspaceImageResponsePrivate object with public implementation \a q.
 */
ImportWorkspaceImageResponsePrivate::ImportWorkspaceImageResponsePrivate(
    ImportWorkspaceImageResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ImportWorkspaceImage response element from \a xml.
 */
void ImportWorkspaceImageResponsePrivate::parseImportWorkspaceImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportWorkspaceImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
