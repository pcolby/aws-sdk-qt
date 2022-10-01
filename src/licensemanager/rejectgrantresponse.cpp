// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectgrantresponse.h"
#include "rejectgrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::RejectGrantResponse
 * \brief The RejectGrantResponse class provides an interace for LicenseManager RejectGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::rejectGrant
 */

/*!
 * Constructs a RejectGrantResponse object for \a reply to \a request, with parent \a parent.
 */
RejectGrantResponse::RejectGrantResponse(
        const RejectGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new RejectGrantResponsePrivate(this), parent)
{
    setRequest(new RejectGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectGrantRequest * RejectGrantResponse::request() const
{
    Q_D(const RejectGrantResponse);
    return static_cast<const RejectGrantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager RejectGrant \a response.
 */
void RejectGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::RejectGrantResponsePrivate
 * \brief The RejectGrantResponsePrivate class provides private implementation for RejectGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a RejectGrantResponsePrivate object with public implementation \a q.
 */
RejectGrantResponsePrivate::RejectGrantResponsePrivate(
    RejectGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager RejectGrant response element from \a xml.
 */
void RejectGrantResponsePrivate::parseRejectGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
