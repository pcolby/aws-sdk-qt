// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlicensemanagerreportgeneratorresponse.h"
#include "getlicensemanagerreportgeneratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseManagerReportGeneratorResponse
 * \brief The GetLicenseManagerReportGeneratorResponse class provides an interace for LicenseManager GetLicenseManagerReportGenerator responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseManagerReportGenerator
 */

/*!
 * Constructs a GetLicenseManagerReportGeneratorResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseManagerReportGeneratorResponse::GetLicenseManagerReportGeneratorResponse(
        const GetLicenseManagerReportGeneratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseManagerReportGeneratorResponsePrivate(this), parent)
{
    setRequest(new GetLicenseManagerReportGeneratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseManagerReportGeneratorRequest * GetLicenseManagerReportGeneratorResponse::request() const
{
    Q_D(const GetLicenseManagerReportGeneratorResponse);
    return static_cast<const GetLicenseManagerReportGeneratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicenseManagerReportGenerator \a response.
 */
void GetLicenseManagerReportGeneratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseManagerReportGeneratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseManagerReportGeneratorResponsePrivate
 * \brief The GetLicenseManagerReportGeneratorResponsePrivate class provides private implementation for GetLicenseManagerReportGeneratorResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseManagerReportGeneratorResponsePrivate object with public implementation \a q.
 */
GetLicenseManagerReportGeneratorResponsePrivate::GetLicenseManagerReportGeneratorResponsePrivate(
    GetLicenseManagerReportGeneratorResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicenseManagerReportGenerator response element from \a xml.
 */
void GetLicenseManagerReportGeneratorResponsePrivate::parseGetLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseManagerReportGeneratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
