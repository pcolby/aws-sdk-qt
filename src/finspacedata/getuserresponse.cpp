// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserresponse.h"
#include "getuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetUserResponse
 * \brief The GetUserResponse class provides an interace for FinspaceData GetUser responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getUser
 */

/*!
 * Constructs a GetUserResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserResponse::GetUserResponse(
        const GetUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetUserResponsePrivate(this), parent)
{
    setRequest(new GetUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserRequest * GetUserResponse::request() const
{
    Q_D(const GetUserResponse);
    return static_cast<const GetUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetUser \a response.
 */
void GetUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetUserResponsePrivate
 * \brief The GetUserResponsePrivate class provides private implementation for GetUserResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetUserResponsePrivate object with public implementation \a q.
 */
GetUserResponsePrivate::GetUserResponsePrivate(
    GetUserResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetUser response element from \a xml.
 */
void GetUserResponsePrivate::parseGetUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
