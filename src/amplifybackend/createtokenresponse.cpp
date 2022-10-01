// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtokenresponse.h"
#include "createtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateTokenResponse
 * \brief The CreateTokenResponse class provides an interace for AmplifyBackend CreateToken responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createToken
 */

/*!
 * Constructs a CreateTokenResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTokenResponse::CreateTokenResponse(
        const CreateTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateTokenResponsePrivate(this), parent)
{
    setRequest(new CreateTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTokenRequest * CreateTokenResponse::request() const
{
    Q_D(const CreateTokenResponse);
    return static_cast<const CreateTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateToken \a response.
 */
void CreateTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateTokenResponsePrivate
 * \brief The CreateTokenResponsePrivate class provides private implementation for CreateTokenResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateTokenResponsePrivate object with public implementation \a q.
 */
CreateTokenResponsePrivate::CreateTokenResponsePrivate(
    CreateTokenResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateToken response element from \a xml.
 */
void CreateTokenResponsePrivate::parseCreateTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
