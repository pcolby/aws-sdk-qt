// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettemporarygluetablecredentialsresponse.h"
#include "gettemporarygluetablecredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTemporaryGlueTableCredentialsResponse
 * \brief The GetTemporaryGlueTableCredentialsResponse class provides an interace for LakeFormation GetTemporaryGlueTableCredentials responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTemporaryGlueTableCredentials
 */

/*!
 * Constructs a GetTemporaryGlueTableCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTemporaryGlueTableCredentialsResponse::GetTemporaryGlueTableCredentialsResponse(
        const GetTemporaryGlueTableCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetTemporaryGlueTableCredentialsResponsePrivate(this), parent)
{
    setRequest(new GetTemporaryGlueTableCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTemporaryGlueTableCredentialsRequest * GetTemporaryGlueTableCredentialsResponse::request() const
{
    Q_D(const GetTemporaryGlueTableCredentialsResponse);
    return static_cast<const GetTemporaryGlueTableCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetTemporaryGlueTableCredentials \a response.
 */
void GetTemporaryGlueTableCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTemporaryGlueTableCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetTemporaryGlueTableCredentialsResponsePrivate
 * \brief The GetTemporaryGlueTableCredentialsResponsePrivate class provides private implementation for GetTemporaryGlueTableCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTemporaryGlueTableCredentialsResponsePrivate object with public implementation \a q.
 */
GetTemporaryGlueTableCredentialsResponsePrivate::GetTemporaryGlueTableCredentialsResponsePrivate(
    GetTemporaryGlueTableCredentialsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetTemporaryGlueTableCredentials response element from \a xml.
 */
void GetTemporaryGlueTableCredentialsResponsePrivate::parseGetTemporaryGlueTableCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTemporaryGlueTableCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
