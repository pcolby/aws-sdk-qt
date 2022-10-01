// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategrantresponse.h"
#include "creategrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateGrantResponse
 * \brief The CreateGrantResponse class provides an interace for LicenseManager CreateGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createGrant
 */

/*!
 * Constructs a CreateGrantResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGrantResponse::CreateGrantResponse(
        const CreateGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateGrantResponsePrivate(this), parent)
{
    setRequest(new CreateGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGrantRequest * CreateGrantResponse::request() const
{
    Q_D(const CreateGrantResponse);
    return static_cast<const CreateGrantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateGrant \a response.
 */
void CreateGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateGrantResponsePrivate
 * \brief The CreateGrantResponsePrivate class provides private implementation for CreateGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateGrantResponsePrivate object with public implementation \a q.
 */
CreateGrantResponsePrivate::CreateGrantResponsePrivate(
    CreateGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateGrant response element from \a xml.
 */
void CreateGrantResponsePrivate::parseCreateGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
