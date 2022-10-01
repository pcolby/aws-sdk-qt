// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackupresponse.h"
#include "deletebackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::DeleteBackupResponse
 * \brief The DeleteBackupResponse class provides an interace for CloudHsmV2 DeleteBackup responses.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::deleteBackup
 */

/*!
 * Constructs a DeleteBackupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupResponse::DeleteBackupResponse(
        const DeleteBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmV2Response(new DeleteBackupResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupRequest * DeleteBackupResponse::request() const
{
    Q_D(const DeleteBackupResponse);
    return static_cast<const DeleteBackupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsmV2 DeleteBackup \a response.
 */
void DeleteBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsmV2::DeleteBackupResponsePrivate
 * \brief The DeleteBackupResponsePrivate class provides private implementation for DeleteBackupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a DeleteBackupResponsePrivate object with public implementation \a q.
 */
DeleteBackupResponsePrivate::DeleteBackupResponsePrivate(
    DeleteBackupResponse * const q) : CloudHsmV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsmV2 DeleteBackup response element from \a xml.
 */
void DeleteBackupResponsePrivate::parseDeleteBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsmV2
} // namespace QtAws
