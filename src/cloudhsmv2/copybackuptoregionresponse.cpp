/*
    Copyright 2013-2020 Paul Colby

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

#include "copybackuptoregionresponse.h"
#include "copybackuptoregionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::CopyBackupToRegionResponse
 * \brief The CopyBackupToRegionResponse class provides an interace for CloudHSMV2 CopyBackupToRegion responses.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::copyBackupToRegion
 */

/*!
 * Constructs a CopyBackupToRegionResponse object for \a reply to \a request, with parent \a parent.
 */
CopyBackupToRegionResponse::CopyBackupToRegionResponse(
        const CopyBackupToRegionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new CopyBackupToRegionResponsePrivate(this), parent)
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
 * Parses a successful CloudHSMV2 CopyBackupToRegion \a response.
 */
void CopyBackupToRegionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyBackupToRegionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSMV2::CopyBackupToRegionResponsePrivate
 * \brief The CopyBackupToRegionResponsePrivate class provides private implementation for CopyBackupToRegionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a CopyBackupToRegionResponsePrivate object with public implementation \a q.
 */
CopyBackupToRegionResponsePrivate::CopyBackupToRegionResponsePrivate(
    CopyBackupToRegionResponse * const q) : CloudHSMV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSMV2 CopyBackupToRegion response element from \a xml.
 */
void CopyBackupToRegionResponsePrivate::parseCopyBackupToRegionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyBackupToRegionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSMV2
} // namespace QtAws
