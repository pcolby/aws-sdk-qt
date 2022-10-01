// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtokenresponse.h"
#include "createtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateTokenResponse
 * \brief The CreateTokenResponse class provides an interace for LicenseManager CreateToken responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createToken
 */

/*!
 * Constructs a CreateTokenResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTokenResponse::CreateTokenResponse(
        const CreateTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateTokenResponsePrivate(this), parent)
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
 * Parses a successful LicenseManager CreateToken \a response.
 */
void CreateTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateTokenResponsePrivate
 * \brief The CreateTokenResponsePrivate class provides private implementation for CreateTokenResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateTokenResponsePrivate object with public implementation \a q.
 */
CreateTokenResponsePrivate::CreateTokenResponsePrivate(
    CreateTokenResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateToken response element from \a xml.
 */
void CreateTokenResponsePrivate::parseCreateTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
