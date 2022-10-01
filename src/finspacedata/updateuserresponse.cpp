// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserresponse.h"
#include "updateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdateUserResponse
 * \brief The UpdateUserResponse class provides an interace for FinspaceData UpdateUser responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updateUser
 */

/*!
 * Constructs a UpdateUserResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserResponse::UpdateUserResponse(
        const UpdateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new UpdateUserResponsePrivate(this), parent)
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
 * Parses a successful FinspaceData UpdateUser \a response.
 */
void UpdateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::UpdateUserResponsePrivate
 * \brief The UpdateUserResponsePrivate class provides private implementation for UpdateUserResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdateUserResponsePrivate object with public implementation \a q.
 */
UpdateUserResponsePrivate::UpdateUserResponsePrivate(
    UpdateUserResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData UpdateUser response element from \a xml.
 */
void UpdateUserResponsePrivate::parseUpdateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
