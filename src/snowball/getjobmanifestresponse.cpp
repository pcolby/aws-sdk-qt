// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobmanifestresponse.h"
#include "getjobmanifestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetJobManifestResponse
 * \brief The GetJobManifestResponse class provides an interace for Snowball GetJobManifest responses.
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
 * \sa SnowballClient::getJobManifest
 */

/*!
 * Constructs a GetJobManifestResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobManifestResponse::GetJobManifestResponse(
        const GetJobManifestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new GetJobManifestResponsePrivate(this), parent)
{
    setRequest(new GetJobManifestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobManifestRequest * GetJobManifestResponse::request() const
{
    Q_D(const GetJobManifestResponse);
    return static_cast<const GetJobManifestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball GetJobManifest \a response.
 */
void GetJobManifestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobManifestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::GetJobManifestResponsePrivate
 * \brief The GetJobManifestResponsePrivate class provides private implementation for GetJobManifestResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a GetJobManifestResponsePrivate object with public implementation \a q.
 */
GetJobManifestResponsePrivate::GetJobManifestResponsePrivate(
    GetJobManifestResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball GetJobManifest response element from \a xml.
 */
void GetJobManifestResponsePrivate::parseGetJobManifestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobManifestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
