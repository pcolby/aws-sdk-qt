/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateinputresponse.h"
#include "updateinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputResponse
 * \brief The UpdateInputResponse class provides an interace for MediaLive UpdateInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInput
 */

/*!
 * Constructs a UpdateInputResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInputResponse::UpdateInputResponse(
        const UpdateInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateInputResponsePrivate(this), parent)
{
    setRequest(new UpdateInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInputRequest * UpdateInputResponse::request() const
{
    Q_D(const UpdateInputResponse);
    return static_cast<const UpdateInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateInput \a response.
 */
void UpdateInputResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateInputResponsePrivate
 * \brief The UpdateInputResponsePrivate class provides private implementation for UpdateInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputResponsePrivate object with public implementation \a q.
 */
UpdateInputResponsePrivate::UpdateInputResponsePrivate(
    UpdateInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateInput response element from \a xml.
 */
void UpdateInputResponsePrivate::parseUpdateInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInputResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
