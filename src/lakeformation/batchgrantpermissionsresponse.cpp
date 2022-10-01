// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgrantpermissionsresponse.h"
#include "batchgrantpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::BatchGrantPermissionsResponse
 * \brief The BatchGrantPermissionsResponse class provides an interace for LakeFormation BatchGrantPermissions responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::batchGrantPermissions
 */

/*!
 * Constructs a BatchGrantPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGrantPermissionsResponse::BatchGrantPermissionsResponse(
        const BatchGrantPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new BatchGrantPermissionsResponsePrivate(this), parent)
{
    setRequest(new BatchGrantPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGrantPermissionsRequest * BatchGrantPermissionsResponse::request() const
{
    Q_D(const BatchGrantPermissionsResponse);
    return static_cast<const BatchGrantPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation BatchGrantPermissions \a response.
 */
void BatchGrantPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGrantPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::BatchGrantPermissionsResponsePrivate
 * \brief The BatchGrantPermissionsResponsePrivate class provides private implementation for BatchGrantPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a BatchGrantPermissionsResponsePrivate object with public implementation \a q.
 */
BatchGrantPermissionsResponsePrivate::BatchGrantPermissionsResponsePrivate(
    BatchGrantPermissionsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation BatchGrantPermissions response element from \a xml.
 */
void BatchGrantPermissionsResponsePrivate::parseBatchGrantPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGrantPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
