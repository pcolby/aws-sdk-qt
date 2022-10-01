// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelicensespecificationsforresourceresponse.h"
#include "updatelicensespecificationsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateLicenseSpecificationsForResourceResponse
 * \brief The UpdateLicenseSpecificationsForResourceResponse class provides an interace for LicenseManager UpdateLicenseSpecificationsForResource responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::updateLicenseSpecificationsForResource
 */

/*!
 * Constructs a UpdateLicenseSpecificationsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLicenseSpecificationsForResourceResponse::UpdateLicenseSpecificationsForResourceResponse(
        const UpdateLicenseSpecificationsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new UpdateLicenseSpecificationsForResourceResponsePrivate(this), parent)
{
    setRequest(new UpdateLicenseSpecificationsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLicenseSpecificationsForResourceRequest * UpdateLicenseSpecificationsForResourceResponse::request() const
{
    Q_D(const UpdateLicenseSpecificationsForResourceResponse);
    return static_cast<const UpdateLicenseSpecificationsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager UpdateLicenseSpecificationsForResource \a response.
 */
void UpdateLicenseSpecificationsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLicenseSpecificationsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::UpdateLicenseSpecificationsForResourceResponsePrivate
 * \brief The UpdateLicenseSpecificationsForResourceResponsePrivate class provides private implementation for UpdateLicenseSpecificationsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateLicenseSpecificationsForResourceResponsePrivate object with public implementation \a q.
 */
UpdateLicenseSpecificationsForResourceResponsePrivate::UpdateLicenseSpecificationsForResourceResponsePrivate(
    UpdateLicenseSpecificationsForResourceResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager UpdateLicenseSpecificationsForResource response element from \a xml.
 */
void UpdateLicenseSpecificationsForResourceResponsePrivate::parseUpdateLicenseSpecificationsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLicenseSpecificationsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
