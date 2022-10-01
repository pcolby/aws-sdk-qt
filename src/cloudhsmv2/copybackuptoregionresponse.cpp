// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copybackuptoregionresponse.h"
#include "copybackuptoregionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::CopyBackupToRegionResponse
 * \brief The CopyBackupToRegionResponse class provides an interace for CloudHsmV2 CopyBackupToRegion responses.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::copyBackupToRegion
 */

/*!
 * Constructs a CopyBackupToRegionResponse object for \a reply to \a request, with parent \a parent.
 */
CopyBackupToRegionResponse::CopyBackupToRegionResponse(
        const CopyBackupToRegionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmV2Response(new CopyBackupToRegionResponsePrivate(this), parent)
{
    setRequest(new CopyBackupToRegionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyBackupToRegionRequest * CopyBackupToRegionResponse::request() const
{
    Q_D(const CopyBackupToRegionResponse);
    return static_cast<const CopyBackupToRegionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsmV2 CopyBackupToRegion \a response.
 */
void CopyBackupToRegionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyBackupToRegionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsmV2::CopyBackupToRegionResponsePrivate
 * \brief The CopyBackupToRegionResponsePrivate class provides private implementation for CopyBackupToRegionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a CopyBackupToRegionResponsePrivate object with public implementation \a q.
 */
CopyBackupToRegionResponsePrivate::CopyBackupToRegionResponsePrivate(
    CopyBackupToRegionResponse * const q) : CloudHsmV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsmV2 CopyBackupToRegion response element from \a xml.
 */
void CopyBackupToRegionResponsePrivate::parseCopyBackupToRegionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyBackupToRegionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsmV2
} // namespace QtAws
