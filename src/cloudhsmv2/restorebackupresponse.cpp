/*
    Copyright 2013-2019 Paul Colby

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

#include "restorebackupresponse.h"
#include "restorebackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::RestoreBackupResponse
 * \brief The RestoreBackupResponse class provides an interace for CloudHSMV2 RestoreBackup responses.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::restoreBackup
 */

/*!
 * Constructs a RestoreBackupResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreBackupResponse::RestoreBackupResponse(
        const RestoreBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new RestoreBackupResponsePrivate(this), parent)
{
    setRequest(new RestoreBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreBackupRequest * RestoreBackupResponse::request() const
{
    Q_D(const RestoreBackupResponse);
    return static_cast<const RestoreBackupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSMV2 RestoreBackup \a response.
 */
void RestoreBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSMV2::RestoreBackupResponsePrivate
 * \brief The RestoreBackupResponsePrivate class provides private implementation for RestoreBackupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a RestoreBackupResponsePrivate object with public implementation \a q.
 */
RestoreBackupResponsePrivate::RestoreBackupResponsePrivate(
    RestoreBackupResponse * const q) : CloudHSMV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSMV2 RestoreBackup response element from \a xml.
 */
void RestoreBackupResponsePrivate::parseRestoreBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSMV2
} // namespace QtAws
