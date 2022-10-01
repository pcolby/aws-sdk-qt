// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateshardcountresponse.h"
#include "updateshardcountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::UpdateShardCountResponse
 * \brief The UpdateShardCountResponse class provides an interace for Kinesis UpdateShardCount responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::updateShardCount
 */

/*!
 * Constructs a UpdateShardCountResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateShardCountResponse::UpdateShardCountResponse(
        const UpdateShardCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new UpdateShardCountResponsePrivate(this), parent)
{
    setRequest(new UpdateShardCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateShardCountRequest * UpdateShardCountResponse::request() const
{
    Q_D(const UpdateShardCountResponse);
    return static_cast<const UpdateShardCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis UpdateShardCount \a response.
 */
void UpdateShardCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateShardCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::UpdateShardCountResponsePrivate
 * \brief The UpdateShardCountResponsePrivate class provides private implementation for UpdateShardCountResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a UpdateShardCountResponsePrivate object with public implementation \a q.
 */
UpdateShardCountResponsePrivate::UpdateShardCountResponsePrivate(
    UpdateShardCountResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis UpdateShardCount response element from \a xml.
 */
void UpdateShardCountResponsePrivate::parseUpdateShardCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateShardCountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
