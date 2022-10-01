// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectattributesresponse.h"
#include "getobjectattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectAttributesResponse
 * \brief The GetObjectAttributesResponse class provides an interace for S3 GetObjectAttributes responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectAttributes
 */

/*!
 * Constructs a GetObjectAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectAttributesResponse::GetObjectAttributesResponse(
        const GetObjectAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectAttributesResponsePrivate(this), parent)
{
    setRequest(new GetObjectAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectAttributesRequest * GetObjectAttributesResponse::request() const
{
    Q_D(const GetObjectAttributesResponse);
    return static_cast<const GetObjectAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectAttributes \a response.
 */
void GetObjectAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectAttributesResponsePrivate
 * \brief The GetObjectAttributesResponsePrivate class provides private implementation for GetObjectAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectAttributesResponsePrivate object with public implementation \a q.
 */
GetObjectAttributesResponsePrivate::GetObjectAttributesResponsePrivate(
    GetObjectAttributesResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectAttributes response element from \a xml.
 */
void GetObjectAttributesResponsePrivate::parseGetObjectAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
