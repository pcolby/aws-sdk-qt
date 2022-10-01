// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableuserresponse.h"
#include "disableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DisableUserResponse
 * \brief The DisableUserResponse class provides an interace for FinspaceData DisableUser responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::disableUser
 */

/*!
 * Constructs a DisableUserResponse object for \a reply to \a request, with parent \a parent.
 */
DisableUserResponse::DisableUserResponse(
        const DisableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new DisableUserResponsePrivate(this), parent)
{
    setRequest(new DisableUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableUserRequest * DisableUserResponse::request() const
{
    Q_D(const DisableUserResponse);
    return static_cast<const DisableUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData DisableUser \a response.
 */
void DisableUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::DisableUserResponsePrivate
 * \brief The DisableUserResponsePrivate class provides private implementation for DisableUserResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DisableUserResponsePrivate object with public implementation \a q.
 */
DisableUserResponsePrivate::DisableUserResponsePrivate(
    DisableUserResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData DisableUser response element from \a xml.
 */
void DisableUserResponsePrivate::parseDisableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
