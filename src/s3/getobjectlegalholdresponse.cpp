// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectlegalholdresponse.h"
#include "getobjectlegalholdresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectLegalHoldResponse
 * \brief The GetObjectLegalHoldResponse class provides an interace for S3 GetObjectLegalHold responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectLegalHold
 */

/*!
 * Constructs a GetObjectLegalHoldResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectLegalHoldResponse::GetObjectLegalHoldResponse(
        const GetObjectLegalHoldRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectLegalHoldResponsePrivate(this), parent)
{
    setRequest(new GetObjectLegalHoldRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectLegalHoldRequest * GetObjectLegalHoldResponse::request() const
{
    Q_D(const GetObjectLegalHoldResponse);
    return static_cast<const GetObjectLegalHoldRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectLegalHold \a response.
 */
void GetObjectLegalHoldResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectLegalHoldResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectLegalHoldResponsePrivate
 * \brief The GetObjectLegalHoldResponsePrivate class provides private implementation for GetObjectLegalHoldResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectLegalHoldResponsePrivate object with public implementation \a q.
 */
GetObjectLegalHoldResponsePrivate::GetObjectLegalHoldResponsePrivate(
    GetObjectLegalHoldResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectLegalHold response element from \a xml.
 */
void GetObjectLegalHoldResponsePrivate::parseGetObjectLegalHoldResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectLegalHoldResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
