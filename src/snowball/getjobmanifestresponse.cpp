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
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The commands described here provide
 *  access to the same functionality that is available in the AWS Snowball Management Console, which enables you to create
 *  and manage jobs for Snowball and Snowball Edge devices. To transfer data locally with a device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for
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
