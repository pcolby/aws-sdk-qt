// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepackagingconfigurationresponse.h"
#include "deletepackagingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingConfigurationResponse
 * \brief The DeletePackagingConfigurationResponse class provides an interace for MediaPackageVod DeletePackagingConfiguration responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::deletePackagingConfiguration
 */

/*!
 * Constructs a DeletePackagingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePackagingConfigurationResponse::DeletePackagingConfigurationResponse(
        const DeletePackagingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new DeletePackagingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeletePackagingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePackagingConfigurationRequest * DeletePackagingConfigurationResponse::request() const
{
    Q_D(const DeletePackagingConfigurationResponse);
    return static_cast<const DeletePackagingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod DeletePackagingConfiguration \a response.
 */
void DeletePackagingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePackagingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingConfigurationResponsePrivate
 * \brief The DeletePackagingConfigurationResponsePrivate class provides private implementation for DeletePackagingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DeletePackagingConfigurationResponsePrivate object with public implementation \a q.
 */
DeletePackagingConfigurationResponsePrivate::DeletePackagingConfigurationResponsePrivate(
    DeletePackagingConfigurationResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod DeletePackagingConfiguration response element from \a xml.
 */
void DeletePackagingConfigurationResponsePrivate::parseDeletePackagingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePackagingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
