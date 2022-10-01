// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendauthresponse.h"
#include "updatebackendauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAuthResponse
 * \brief The UpdateBackendAuthResponse class provides an interace for AmplifyBackend UpdateBackendAuth responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendAuth
 */

/*!
 * Constructs a UpdateBackendAuthResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendAuthResponse::UpdateBackendAuthResponse(
        const UpdateBackendAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendAuthResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendAuthRequest * UpdateBackendAuthResponse::request() const
{
    Q_D(const UpdateBackendAuthResponse);
    return static_cast<const UpdateBackendAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendAuth \a response.
 */
void UpdateBackendAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAuthResponsePrivate
 * \brief The UpdateBackendAuthResponsePrivate class provides private implementation for UpdateBackendAuthResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendAuthResponsePrivate object with public implementation \a q.
 */
UpdateBackendAuthResponsePrivate::UpdateBackendAuthResponsePrivate(
    UpdateBackendAuthResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendAuth response element from \a xml.
 */
void UpdateBackendAuthResponsePrivate::parseUpdateBackendAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
