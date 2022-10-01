// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategrantversionresponse.h"
#include "creategrantversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateGrantVersionResponse
 * \brief The CreateGrantVersionResponse class provides an interace for LicenseManager CreateGrantVersion responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createGrantVersion
 */

/*!
 * Constructs a CreateGrantVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGrantVersionResponse::CreateGrantVersionResponse(
        const CreateGrantVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateGrantVersionResponsePrivate(this), parent)
{
    setRequest(new CreateGrantVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGrantVersionRequest * CreateGrantVersionResponse::request() const
{
    Q_D(const CreateGrantVersionResponse);
    return static_cast<const CreateGrantVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateGrantVersion \a response.
 */
void CreateGrantVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGrantVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateGrantVersionResponsePrivate
 * \brief The CreateGrantVersionResponsePrivate class provides private implementation for CreateGrantVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateGrantVersionResponsePrivate object with public implementation \a q.
 */
CreateGrantVersionResponsePrivate::CreateGrantVersionResponsePrivate(
    CreateGrantVersionResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateGrantVersion response element from \a xml.
 */
void CreateGrantVersionResponsePrivate::parseCreateGrantVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGrantVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
