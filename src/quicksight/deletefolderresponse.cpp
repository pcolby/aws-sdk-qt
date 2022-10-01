// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
