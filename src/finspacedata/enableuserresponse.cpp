// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableuserresponse.h"
#include "enableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::EnableUserResponse
 * \brief The EnableUserResponse class provides an interace for FinspaceData EnableUser responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::enableUser
 */

/*!
 * Constructs a EnableUserResponse object for \a reply to \a request, with parent \a parent.
 */
EnableUserResponse::EnableUserResponse(
        const EnableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new EnableUserResponsePrivate(this), parent)
{
    setRequest(new EnableUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableUserRequest * EnableUserResponse::request() const
{
    Q_D(const EnableUserResponse);
    return static_cast<const EnableUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData EnableUser \a response.
 */
void EnableUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::EnableUserResponsePrivate
 * \brief The EnableUserResponsePrivate class provides private implementation for EnableUserResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a EnableUserResponsePrivate object with public implementation \a q.
 */
EnableUserResponsePrivate::EnableUserResponsePrivate(
    EnableUserResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData EnableUser response element from \a xml.
 */
void EnableUserResponsePrivate::parseEnableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
