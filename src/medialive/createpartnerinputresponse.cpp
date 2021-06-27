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

#include "createpartnerinputresponse.h"
#include "createpartnerinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreatePartnerInputResponse
 * \brief The CreatePartnerInputResponse class provides an interace for MediaLive CreatePartnerInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createPartnerInput
 */

/*!
 * Constructs a CreatePartnerInputResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePartnerInputResponse::CreatePartnerInputResponse(
        const CreatePartnerInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreatePartnerInputResponsePrivate(this), parent)
{
    setRequest(new CreatePartnerInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePartnerInputRequest * CreatePartnerInputResponse::request() const
{
    return static_cast<const CreatePartnerInputRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive CreatePartnerInput \a response.
 */
void CreatePartnerInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePartnerInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreatePartnerInputResponsePrivate
 * \brief The CreatePartnerInputResponsePrivate class provides private implementation for CreatePartnerInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreatePartnerInputResponsePrivate object with public implementation \a q.
 */
CreatePartnerInputResponsePrivate::CreatePartnerInputResponsePrivate(
    CreatePartnerInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreatePartnerInput response element from \a xml.
 */
void CreatePartnerInputResponsePrivate::parseCreatePartnerInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePartnerInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
