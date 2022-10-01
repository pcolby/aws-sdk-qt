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

#include "deletefolderresponse.h"
#include "deletefolderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteFolderResponse
 * \brief The DeleteFolderResponse class provides an interace for QuickSight DeleteFolder responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteFolder
 */

/*!
 * Constructs a DeleteFolderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFolderResponse::DeleteFolderResponse(
        const DeleteFolderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteFolderResponsePrivate(this), parent)
{
    setRequest(new DeleteFolderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFolderRequest * DeleteFolderResponse::request() const
{
    Q_D(const DeleteFolderResponse);
    return static_cast<const DeleteFolderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteFolder \a response.
 */
void DeleteFolderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFolderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteFolderResponsePrivate
 * \brief The DeleteFolderResponsePrivate class provides private implementation for DeleteFolderResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteFolderResponsePrivate object with public implementation \a q.
 */
DeleteFolderResponsePrivate::DeleteFolderResponsePrivate(
    DeleteFolderResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteFolder response element from \a xml.
 */
void DeleteFolderResponsePrivate::parseDeleteFolderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFolderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
