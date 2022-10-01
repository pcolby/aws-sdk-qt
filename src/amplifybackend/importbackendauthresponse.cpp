// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importbackendauthresponse.h"
#include "importbackendauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ImportBackendAuthResponse
 * \brief The ImportBackendAuthResponse class provides an interace for AmplifyBackend ImportBackendAuth responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::importBackendAuth
 */

/*!
 * Constructs a ImportBackendAuthResponse object for \a reply to \a request, with parent \a parent.
 */
ImportBackendAuthResponse::ImportBackendAuthResponse(
        const ImportBackendAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new ImportBackendAuthResponsePrivate(this), parent)
{
    setRequest(new ImportBackendAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportBackendAuthRequest * ImportBackendAuthResponse::request() const
{
    Q_D(const ImportBackendAuthResponse);
    return static_cast<const ImportBackendAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend ImportBackendAuth \a response.
 */
void ImportBackendAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportBackendAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::ImportBackendAuthResponsePrivate
 * \brief The ImportBackendAuthResponsePrivate class provides private implementation for ImportBackendAuthResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ImportBackendAuthResponsePrivate object with public implementation \a q.
 */
ImportBackendAuthResponsePrivate::ImportBackendAuthResponsePrivate(
    ImportBackendAuthResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend ImportBackendAuth response element from \a xml.
 */
void ImportBackendAuthResponsePrivate::parseImportBackendAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportBackendAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
