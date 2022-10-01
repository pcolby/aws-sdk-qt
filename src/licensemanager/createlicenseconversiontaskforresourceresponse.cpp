/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createlicenseconversiontaskforresourceresponse.h"
#include "createlicenseconversiontaskforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseConversionTaskForResourceResponse
 * \brief The CreateLicenseConversionTaskForResourceResponse class provides an interace for LicenseManager CreateLicenseConversionTaskForResource responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseConversionTaskForResource
 */

/*!
 * Constructs a CreateLicenseConversionTaskForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseConversionTaskForResourceResponse::CreateLicenseConversionTaskForResourceResponse(
        const CreateLicenseConversionTaskForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseConversionTaskForResourceResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseConversionTaskForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseConversionTaskForResourceRequest * CreateLicenseConversionTaskForResourceResponse::request() const
{
    Q_D(const CreateLicenseConversionTaskForResourceResponse);
    return static_cast<const CreateLicenseConversionTaskForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicenseConversionTaskForResource \a response.
 */
void CreateLicenseConversionTaskForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseConversionTaskForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseConversionTaskForResourceResponsePrivate
 * \brief The CreateLicenseConversionTaskForResourceResponsePrivate class provides private implementation for CreateLicenseConversionTaskForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseConversionTaskForResourceResponsePrivate object with public implementation \a q.
 */
CreateLicenseConversionTaskForResourceResponsePrivate::CreateLicenseConversionTaskForResourceResponsePrivate(
    CreateLicenseConversionTaskForResourceResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicenseConversionTaskForResource response element from \a xml.
 */
void CreateLicenseConversionTaskForResourceResponsePrivate::parseCreateLicenseConversionTaskForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseConversionTaskForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
