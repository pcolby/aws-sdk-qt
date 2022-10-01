// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelicensemanagerreportgeneratorresponse.h"
#include "deletelicensemanagerreportgeneratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseManagerReportGeneratorResponse
 * \brief The DeleteLicenseManagerReportGeneratorResponse class provides an interace for LicenseManager DeleteLicenseManagerReportGenerator responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteLicenseManagerReportGenerator
 */

/*!
 * Constructs a DeleteLicenseManagerReportGeneratorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLicenseManagerReportGeneratorResponse::DeleteLicenseManagerReportGeneratorResponse(
        const DeleteLicenseManagerReportGeneratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new DeleteLicenseManagerReportGeneratorResponsePrivate(this), parent)
{
    setRequest(new DeleteLicenseManagerReportGeneratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLicenseManagerReportGeneratorRequest * DeleteLicenseManagerReportGeneratorResponse::request() const
{
    Q_D(const DeleteLicenseManagerReportGeneratorResponse);
    return static_cast<const DeleteLicenseManagerReportGeneratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager DeleteLicenseManagerReportGenerator \a response.
 */
void DeleteLicenseManagerReportGeneratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLicenseManagerReportGeneratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseManagerReportGeneratorResponsePrivate
 * \brief The DeleteLicenseManagerReportGeneratorResponsePrivate class provides private implementation for DeleteLicenseManagerReportGeneratorResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseManagerReportGeneratorResponsePrivate object with public implementation \a q.
 */
DeleteLicenseManagerReportGeneratorResponsePrivate::DeleteLicenseManagerReportGeneratorResponsePrivate(
    DeleteLicenseManagerReportGeneratorResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager DeleteLicenseManagerReportGenerator response element from \a xml.
 */
void DeleteLicenseManagerReportGeneratorResponsePrivate::parseDeleteLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLicenseManagerReportGeneratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
