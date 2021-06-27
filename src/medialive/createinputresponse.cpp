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

#include "createinputresponse.h"
#include "createinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateInputResponse
 * \brief The CreateInputResponse class provides an interace for MediaLive CreateInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createInput
 */

/*!
 * Constructs a CreateInputResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInputResponse::CreateInputResponse(
        const CreateInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateInputResponsePrivate(this), parent)
{
    setRequest(new CreateInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInputRequest * CreateInputResponse::request() const
{
    return static_cast<const CreateInputRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive CreateInput \a response.
 */
void CreateInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreateInputResponsePrivate
 * \brief The CreateInputResponsePrivate class provides private implementation for CreateInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateInputResponsePrivate object with public implementation \a q.
 */
CreateInputResponsePrivate::CreateInputResponsePrivate(
    CreateInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreateInput response element from \a xml.
 */
void CreateInputResponsePrivate::parseCreateInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
