// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendauthresponse.h"
#include "deletebackendauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAuthResponse
 * \brief The DeleteBackendAuthResponse class provides an interace for AmplifyBackend DeleteBackendAuth responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendAuth
 */

/*!
 * Constructs a DeleteBackendAuthResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackendAuthResponse::DeleteBackendAuthResponse(
        const DeleteBackendAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new DeleteBackendAuthResponsePrivate(this), parent)
{
    setRequest(new DeleteBackendAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackendAuthRequest * DeleteBackendAuthResponse::request() const
{
    Q_D(const DeleteBackendAuthResponse);
    return static_cast<const DeleteBackendAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend DeleteBackendAuth \a response.
 */
void DeleteBackendAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackendAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAuthResponsePrivate
 * \brief The DeleteBackendAuthResponsePrivate class provides private implementation for DeleteBackendAuthResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendAuthResponsePrivate object with public implementation \a q.
 */
DeleteBackendAuthResponsePrivate::DeleteBackendAuthResponsePrivate(
    DeleteBackendAuthResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend DeleteBackendAuth response element from \a xml.
 */
void DeleteBackendAuthResponsePrivate::parseDeleteBackendAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackendAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
