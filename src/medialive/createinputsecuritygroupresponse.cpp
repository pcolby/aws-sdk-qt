/*
    Copyright 2013-2020 Paul Colby

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

#include "createinputsecuritygroupresponse.h"
#include "createinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateInputSecurityGroupResponse
 * \brief The CreateInputSecurityGroupResponse class provides an interace for MediaLive CreateInputSecurityGroup responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createInputSecurityGroup
 */

/*!
 * Constructs a CreateInputSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInputSecurityGroupResponse::CreateInputSecurityGroupResponse(
        const CreateInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateInputSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInputSecurityGroupRequest * CreateInputSecurityGroupResponse::request() const
{
    Q_D(const CreateInputSecurityGroupResponse);
    return static_cast<const CreateInputSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive CreateInputSecurityGroup \a response.
 */
void CreateInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInputSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreateInputSecurityGroupResponsePrivate
 * \brief The CreateInputSecurityGroupResponsePrivate class provides private implementation for CreateInputSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateInputSecurityGroupResponsePrivate object with public implementation \a q.
 */
CreateInputSecurityGroupResponsePrivate::CreateInputSecurityGroupResponsePrivate(
    CreateInputSecurityGroupResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreateInputSecurityGroup response element from \a xml.
 */
void CreateInputSecurityGroupResponsePrivate::parseCreateInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInputSecurityGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
