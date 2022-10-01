// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetokenresponse.h"
#include "deletetokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteTokenResponse
 * \brief The DeleteTokenResponse class provides an interace for AmplifyBackend DeleteToken responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteToken
 */

/*!
 * Constructs a DeleteTokenResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTokenResponse::DeleteTokenResponse(
        const DeleteTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new DeleteTokenResponsePrivate(this), parent)
{
    setRequest(new DeleteTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTokenRequest * DeleteTokenResponse::request() const
{
    Q_D(const DeleteTokenResponse);
    return static_cast<const DeleteTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend DeleteToken \a response.
 */
void DeleteTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::DeleteTokenResponsePrivate
 * \brief The DeleteTokenResponsePrivate class provides private implementation for DeleteTokenResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteTokenResponsePrivate object with public implementation \a q.
 */
DeleteTokenResponsePrivate::DeleteTokenResponsePrivate(
    DeleteTokenResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend DeleteToken response element from \a xml.
 */
void DeleteTokenResponsePrivate::parseDeleteTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
