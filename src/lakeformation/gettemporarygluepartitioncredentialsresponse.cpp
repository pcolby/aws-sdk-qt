// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettemporarygluepartitioncredentialsresponse.h"
#include "gettemporarygluepartitioncredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTemporaryGluePartitionCredentialsResponse
 * \brief The GetTemporaryGluePartitionCredentialsResponse class provides an interace for LakeFormation GetTemporaryGluePartitionCredentials responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTemporaryGluePartitionCredentials
 */

/*!
 * Constructs a GetTemporaryGluePartitionCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTemporaryGluePartitionCredentialsResponse::GetTemporaryGluePartitionCredentialsResponse(
        const GetTemporaryGluePartitionCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetTemporaryGluePartitionCredentialsResponsePrivate(this), parent)
{
    setRequest(new GetTemporaryGluePartitionCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTemporaryGluePartitionCredentialsRequest * GetTemporaryGluePartitionCredentialsResponse::request() const
{
    Q_D(const GetTemporaryGluePartitionCredentialsResponse);
    return static_cast<const GetTemporaryGluePartitionCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetTemporaryGluePartitionCredentials \a response.
 */
void GetTemporaryGluePartitionCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTemporaryGluePartitionCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetTemporaryGluePartitionCredentialsResponsePrivate
 * \brief The GetTemporaryGluePartitionCredentialsResponsePrivate class provides private implementation for GetTemporaryGluePartitionCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTemporaryGluePartitionCredentialsResponsePrivate object with public implementation \a q.
 */
GetTemporaryGluePartitionCredentialsResponsePrivate::GetTemporaryGluePartitionCredentialsResponsePrivate(
    GetTemporaryGluePartitionCredentialsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetTemporaryGluePartitionCredentials response element from \a xml.
 */
void GetTemporaryGluePartitionCredentialsResponsePrivate::parseGetTemporaryGluePartitionCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTemporaryGluePartitionCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
