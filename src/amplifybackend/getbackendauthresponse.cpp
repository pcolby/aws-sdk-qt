// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendauthresponse.h"
#include "getbackendauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAuthResponse
 * \brief The GetBackendAuthResponse class provides an interace for AmplifyBackend GetBackendAuth responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAuth
 */

/*!
 * Constructs a GetBackendAuthResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendAuthResponse::GetBackendAuthResponse(
        const GetBackendAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendAuthResponsePrivate(this), parent)
{
    setRequest(new GetBackendAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendAuthRequest * GetBackendAuthResponse::request() const
{
    Q_D(const GetBackendAuthResponse);
    return static_cast<const GetBackendAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackendAuth \a response.
 */
void GetBackendAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAuthResponsePrivate
 * \brief The GetBackendAuthResponsePrivate class provides private implementation for GetBackendAuthResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAuthResponsePrivate object with public implementation \a q.
 */
GetBackendAuthResponsePrivate::GetBackendAuthResponsePrivate(
    GetBackendAuthResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackendAuth response element from \a xml.
 */
void GetBackendAuthResponsePrivate::parseGetBackendAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
