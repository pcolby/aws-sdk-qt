// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecordsresponse.h"
#include "getrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::GetRecordsResponse
 * \brief The GetRecordsResponse class provides an interace for Kinesis GetRecords responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::getRecords
 */

/*!
 * Constructs a GetRecordsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecordsResponse::GetRecordsResponse(
        const GetRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new GetRecordsResponsePrivate(this), parent)
{
    setRequest(new GetRecordsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecordsRequest * GetRecordsResponse::request() const
{
    Q_D(const GetRecordsResponse);
    return static_cast<const GetRecordsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis GetRecords \a response.
 */
void GetRecordsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::GetRecordsResponsePrivate
 * \brief The GetRecordsResponsePrivate class provides private implementation for GetRecordsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a GetRecordsResponsePrivate object with public implementation \a q.
 */
GetRecordsResponsePrivate::GetRecordsResponsePrivate(
    GetRecordsResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis GetRecords response element from \a xml.
 */
void GetRecordsResponsePrivate::parseGetRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecordsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
