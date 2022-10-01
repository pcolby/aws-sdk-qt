// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getqueueresponse.h"
#include "getqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetQueueResponse
 * \brief The GetQueueResponse class provides an interace for MediaConvert GetQueue responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getQueue
 */

/*!
 * Constructs a GetQueueResponse object for \a reply to \a request, with parent \a parent.
 */
GetQueueResponse::GetQueueResponse(
        const GetQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new GetQueueResponsePrivate(this), parent)
{
    setRequest(new GetQueueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQueueRequest * GetQueueResponse::request() const
{
    Q_D(const GetQueueResponse);
    return static_cast<const GetQueueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert GetQueue \a response.
 */
void GetQueueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::GetQueueResponsePrivate
 * \brief The GetQueueResponsePrivate class provides private implementation for GetQueueResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetQueueResponsePrivate object with public implementation \a q.
 */
GetQueueResponsePrivate::GetQueueResponsePrivate(
    GetQueueResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert GetQueue response element from \a xml.
 */
void GetQueueResponsePrivate::parseGetQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
