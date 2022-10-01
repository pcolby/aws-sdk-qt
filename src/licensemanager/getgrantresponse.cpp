// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgrantresponse.h"
#include "getgrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetGrantResponse
 * \brief The GetGrantResponse class provides an interace for LicenseManager GetGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getGrant
 */

/*!
 * Constructs a GetGrantResponse object for \a reply to \a request, with parent \a parent.
 */
GetGrantResponse::GetGrantResponse(
        const GetGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetGrantResponsePrivate(this), parent)
{
    setRequest(new GetGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGrantRequest * GetGrantResponse::request() const
{
    Q_D(const GetGrantResponse);
    return static_cast<const GetGrantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetGrant \a response.
 */
void GetGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetGrantResponsePrivate
 * \brief The GetGrantResponsePrivate class provides private implementation for GetGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetGrantResponsePrivate object with public implementation \a q.
 */
GetGrantResponsePrivate::GetGrantResponsePrivate(
    GetGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetGrant response element from \a xml.
 */
void GetGrantResponsePrivate::parseGetGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
