/*
    Copyright 2013-2021 Paul Colby

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
