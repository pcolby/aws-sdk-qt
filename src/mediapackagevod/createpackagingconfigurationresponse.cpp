// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreatePackagingConfigurationResponse);
    return static_cast<const CreatePackagingConfigurationRequest *>(d->request);
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
