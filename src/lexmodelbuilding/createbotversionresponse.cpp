// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbotversionresponse.h"
#include "createbotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::CreateBotVersionResponse
 * \brief The CreateBotVersionResponse class provides an interace for LexModelBuilding CreateBotVersion responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::createBotVersion
 */

/*!
 * Constructs a CreateBotVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBotVersionResponse::CreateBotVersionResponse(
        const CreateBotVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new CreateBotVersionResponsePrivate(this), parent)
{
    setRequest(new CreateBotVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBotVersionRequest * CreateBotVersionResponse::request() const
{
    Q_D(const CreateBotVersionResponse);
    return static_cast<const CreateBotVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding CreateBotVersion \a response.
 */
void CreateBotVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBotVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::CreateBotVersionResponsePrivate
 * \brief The CreateBotVersionResponsePrivate class provides private implementation for CreateBotVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a CreateBotVersionResponsePrivate object with public implementation \a q.
 */
CreateBotVersionResponsePrivate::CreateBotVersionResponsePrivate(
    CreateBotVersionResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding CreateBotVersion response element from \a xml.
 */
void CreateBotVersionResponsePrivate::parseCreateBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
