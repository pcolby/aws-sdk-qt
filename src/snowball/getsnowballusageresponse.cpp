// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsnowballusageresponse.h"
#include "getsnowballusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetSnowballUsageResponse
 * \brief The GetSnowballUsageResponse class provides an interace for Snowball GetSnowballUsage responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::getSnowballUsage
 */

/*!
 * Constructs a GetSnowballUsageResponse object for \a reply to \a request, with parent \a parent.
 */
GetSnowballUsageResponse::GetSnowballUsageResponse(
        const GetSnowballUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new GetSnowballUsageResponsePrivate(this), parent)
{
    setRequest(new GetSnowballUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSnowballUsageRequest * GetSnowballUsageResponse::request() const
{
    Q_D(const GetSnowballUsageResponse);
    return static_cast<const GetSnowballUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball GetSnowballUsage \a response.
 */
void GetSnowballUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSnowballUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::GetSnowballUsageResponsePrivate
 * \brief The GetSnowballUsageResponsePrivate class provides private implementation for GetSnowballUsageResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a GetSnowballUsageResponsePrivate object with public implementation \a q.
 */
GetSnowballUsageResponsePrivate::GetSnowballUsageResponsePrivate(
    GetSnowballUsageResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball GetSnowballUsage response element from \a xml.
 */
void GetSnowballUsageResponsePrivate::parseGetSnowballUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSnowballUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
