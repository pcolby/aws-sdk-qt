// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicensemanagerreportgeneratorresponse.h"
#include "createlicensemanagerreportgeneratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseManagerReportGeneratorResponse
 * \brief The CreateLicenseManagerReportGeneratorResponse class provides an interace for LicenseManager CreateLicenseManagerReportGenerator responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseManagerReportGenerator
 */

/*!
 * Constructs a CreateLicenseManagerReportGeneratorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseManagerReportGeneratorResponse::CreateLicenseManagerReportGeneratorResponse(
        const CreateLicenseManagerReportGeneratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseManagerReportGeneratorResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseManagerReportGeneratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseManagerReportGeneratorRequest * CreateLicenseManagerReportGeneratorResponse::request() const
{
    Q_D(const CreateLicenseManagerReportGeneratorResponse);
    return static_cast<const CreateLicenseManagerReportGeneratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicenseManagerReportGenerator \a response.
 */
void CreateLicenseManagerReportGeneratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseManagerReportGeneratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseManagerReportGeneratorResponsePrivate
 * \brief The CreateLicenseManagerReportGeneratorResponsePrivate class provides private implementation for CreateLicenseManagerReportGeneratorResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseManagerReportGeneratorResponsePrivate object with public implementation \a q.
 */
CreateLicenseManagerReportGeneratorResponsePrivate::CreateLicenseManagerReportGeneratorResponsePrivate(
    CreateLicenseManagerReportGeneratorResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicenseManagerReportGenerator response element from \a xml.
 */
void CreateLicenseManagerReportGeneratorResponsePrivate::parseCreateLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseManagerReportGeneratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
