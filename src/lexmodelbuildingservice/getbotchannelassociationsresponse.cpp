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

#include "getbotchannelassociationsresponse.h"
#include "getbotchannelassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotChannelAssociationsResponse
 * \brief The GetBotChannelAssociationsResponse class provides an interace for LexModelBuildingService GetBotChannelAssociations responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBotChannelAssociations
 */

/*!
 * Constructs a GetBotChannelAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotChannelAssociationsResponse::GetBotChannelAssociationsResponse(
        const GetBotChannelAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotChannelAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetBotChannelAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotChannelAssociationsRequest * GetBotChannelAssociationsResponse::request() const
{
    Q_D(const GetBotChannelAssociationsResponse);
    return static_cast<const GetBotChannelAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetBotChannelAssociations \a response.
 */
void GetBotChannelAssociationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBotChannelAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBotChannelAssociationsResponsePrivate
 * \brief The GetBotChannelAssociationsResponsePrivate class provides private implementation for GetBotChannelAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotChannelAssociationsResponsePrivate object with public implementation \a q.
 */
GetBotChannelAssociationsResponsePrivate::GetBotChannelAssociationsResponsePrivate(
    GetBotChannelAssociationsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBotChannelAssociations response element from \a xml.
 */
void GetBotChannelAssociationsResponsePrivate::parseGetBotChannelAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotChannelAssociationsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
