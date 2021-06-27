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

#include "modifybackupattributesresponse.h"
#include "modifybackupattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::ModifyBackupAttributesResponse
 * \brief The ModifyBackupAttributesResponse class provides an interace for CloudHSMV2 ModifyBackupAttributes responses.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::modifyBackupAttributes
 */

/*!
 * Constructs a ModifyBackupAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyBackupAttributesResponse::ModifyBackupAttributesResponse(
        const ModifyBackupAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new ModifyBackupAttributesResponsePrivate(this), parent)
{
    setRequest(new ModifyBackupAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyBackupAttributesRequest * ModifyBackupAttributesResponse::request() const
{
    return static_cast<const ModifyBackupAttributesRequest *>(CloudHSMV2Response::request());
}

/*!
 * \reimp
 * Parses a successful CloudHSMV2 ModifyBackupAttributes \a response.
 */
void ModifyBackupAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyBackupAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSMV2::ModifyBackupAttributesResponsePrivate
 * \brief The ModifyBackupAttributesResponsePrivate class provides private implementation for ModifyBackupAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a ModifyBackupAttributesResponsePrivate object with public implementation \a q.
 */
ModifyBackupAttributesResponsePrivate::ModifyBackupAttributesResponsePrivate(
    ModifyBackupAttributesResponse * const q) : CloudHSMV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSMV2 ModifyBackupAttributes response element from \a xml.
 */
void ModifyBackupAttributesResponsePrivate::parseModifyBackupAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyBackupAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSMV2
} // namespace QtAws
