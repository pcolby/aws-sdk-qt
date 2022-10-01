// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlicenseconversiontaskresponse.h"
#include "getlicenseconversiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseConversionTaskResponse
 * \brief The GetLicenseConversionTaskResponse class provides an interace for LicenseManager GetLicenseConversionTask responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseConversionTask
 */

/*!
 * Constructs a GetLicenseConversionTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseConversionTaskResponse::GetLicenseConversionTaskResponse(
        const GetLicenseConversionTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseConversionTaskResponsePrivate(this), parent)
{
    setRequest(new GetLicenseConversionTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseConversionTaskRequest * GetLicenseConversionTaskResponse::request() const
{
    Q_D(const GetLicenseConversionTaskResponse);
    return static_cast<const GetLicenseConversionTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicenseConversionTask \a response.
 */
void GetLicenseConversionTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseConversionTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseConversionTaskResponsePrivate
 * \brief The GetLicenseConversionTaskResponsePrivate class provides private implementation for GetLicenseConversionTaskResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseConversionTaskResponsePrivate object with public implementation \a q.
 */
GetLicenseConversionTaskResponsePrivate::GetLicenseConversionTaskResponsePrivate(
    GetLicenseConversionTaskResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicenseConversionTask response element from \a xml.
 */
void GetLicenseConversionTaskResponsePrivate::parseGetLicenseConversionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseConversionTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
