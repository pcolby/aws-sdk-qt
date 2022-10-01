// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserresponse.h"
#include "updateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateUserResponse
 * \brief The UpdateUserResponse class provides an interace for QuickSight UpdateUser responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateUser
 */

/*!
 * Constructs a UpdateUserResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserResponse::UpdateUserResponse(
        const UpdateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateUserResponsePrivate(this), parent)
{
    setRequest(new UpdateUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserRequest * UpdateUserResponse::request() const
{
    Q_D(const UpdateUserResponse);
    return static_cast<const UpdateUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateUser \a response.
 */
void UpdateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateUserResponsePrivate
 * \brief The UpdateUserResponsePrivate class provides private implementation for UpdateUserResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateUserResponsePrivate object with public implementation \a q.
 */
UpdateUserResponsePrivate::UpdateUserResponsePrivate(
    UpdateUserResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateUser response element from \a xml.
 */
void UpdateUserResponsePrivate::parseUpdateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
