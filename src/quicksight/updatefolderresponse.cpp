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

#include "updatefolderresponse.h"
#include "updatefolderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateFolderResponse
 * \brief The UpdateFolderResponse class provides an interace for QuickSight UpdateFolder responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateFolder
 */

/*!
 * Constructs a UpdateFolderResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFolderResponse::UpdateFolderResponse(
        const UpdateFolderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateFolderResponsePrivate(this), parent)
{
    setRequest(new UpdateFolderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFolderRequest * UpdateFolderResponse::request() const
{
    Q_D(const UpdateFolderResponse);
    return static_cast<const UpdateFolderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateFolder \a response.
 */
void UpdateFolderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFolderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateFolderResponsePrivate
 * \brief The UpdateFolderResponsePrivate class provides private implementation for UpdateFolderResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateFolderResponsePrivate object with public implementation \a q.
 */
UpdateFolderResponsePrivate::UpdateFolderResponsePrivate(
    UpdateFolderResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateFolder response element from \a xml.
 */
void UpdateFolderResponsePrivate::parseUpdateFolderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFolderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
