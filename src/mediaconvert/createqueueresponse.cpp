// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createqueueresponse.h"
#include "createqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateQueueResponse
 * \brief The CreateQueueResponse class provides an interace for MediaConvert CreateQueue responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createQueue
 */

/*!
 * Constructs a CreateQueueResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQueueResponse::CreateQueueResponse(
        const CreateQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new CreateQueueResponsePrivate(this), parent)
{
    setRequest(new CreateQueueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQueueRequest * CreateQueueResponse::request() const
{
    Q_D(const CreateQueueResponse);
    return static_cast<const CreateQueueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert CreateQueue \a response.
 */
void CreateQueueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::CreateQueueResponsePrivate
 * \brief The CreateQueueResponsePrivate class provides private implementation for CreateQueueResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreateQueueResponsePrivate object with public implementation \a q.
 */
CreateQueueResponsePrivate::CreateQueueResponsePrivate(
    CreateQueueResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert CreateQueue response element from \a xml.
 */
void CreateQueueResponsePrivate::parseCreateQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
