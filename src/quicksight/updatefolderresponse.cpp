// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
