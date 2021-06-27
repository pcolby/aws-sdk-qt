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

#include "createpackagingconfigurationresponse.h"
#include "createpackagingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::CreatePackagingConfigurationResponse
 * \brief The CreatePackagingConfigurationResponse class provides an interace for MediaPackageVod CreatePackagingConfiguration responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::createPackagingConfiguration
 */

/*!
 * Constructs a CreatePackagingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePackagingConfigurationResponse::CreatePackagingConfigurationResponse(
        const CreatePackagingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new CreatePackagingConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreatePackagingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePackagingConfigurationRequest * CreatePackagingConfigurationResponse::request() const
{
    return static_cast<const CreatePackagingConfigurationRequest *>(MediaPackageVodResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod CreatePackagingConfiguration \a response.
 */
void CreatePackagingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePackagingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::CreatePackagingConfigurationResponsePrivate
 * \brief The CreatePackagingConfigurationResponsePrivate class provides private implementation for CreatePackagingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a CreatePackagingConfigurationResponsePrivate object with public implementation \a q.
 */
CreatePackagingConfigurationResponsePrivate::CreatePackagingConfigurationResponsePrivate(
    CreatePackagingConfigurationResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod CreatePackagingConfiguration response element from \a xml.
 */
void CreatePackagingConfigurationResponsePrivate::parseCreatePackagingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePackagingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
