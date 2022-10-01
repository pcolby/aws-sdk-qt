// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequeueresponse.h"
#include "deletequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeleteQueueResponse
 * \brief The DeleteQueueResponse class provides an interace for MediaConvert DeleteQueue responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deleteQueue
 */

/*!
 * Constructs a DeleteQueueResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQueueResponse::DeleteQueueResponse(
        const DeleteQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DeleteQueueResponsePrivate(this), parent)
{
    setRequest(new DeleteQueueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQueueRequest * DeleteQueueResponse::request() const
{
    Q_D(const DeleteQueueResponse);
    return static_cast<const DeleteQueueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert DeleteQueue \a response.
 */
void DeleteQueueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::DeleteQueueResponsePrivate
 * \brief The DeleteQueueResponsePrivate class provides private implementation for DeleteQueueResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DeleteQueueResponsePrivate object with public implementation \a q.
 */
DeleteQueueResponsePrivate::DeleteQueueResponsePrivate(
    DeleteQueueResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert DeleteQueue response element from \a xml.
 */
void DeleteQueueResponsePrivate::parseDeleteQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQueueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
