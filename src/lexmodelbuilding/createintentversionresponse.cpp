// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createintentversionresponse.h"
#include "createintentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::CreateIntentVersionResponse
 * \brief The CreateIntentVersionResponse class provides an interace for LexModelBuilding CreateIntentVersion responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::createIntentVersion
 */

/*!
 * Constructs a CreateIntentVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIntentVersionResponse::CreateIntentVersionResponse(
        const CreateIntentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new CreateIntentVersionResponsePrivate(this), parent)
{
    setRequest(new CreateIntentVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIntentVersionRequest * CreateIntentVersionResponse::request() const
{
    Q_D(const CreateIntentVersionResponse);
    return static_cast<const CreateIntentVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding CreateIntentVersion \a response.
 */
void CreateIntentVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIntentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::CreateIntentVersionResponsePrivate
 * \brief The CreateIntentVersionResponsePrivate class provides private implementation for CreateIntentVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a CreateIntentVersionResponsePrivate object with public implementation \a q.
 */
CreateIntentVersionResponsePrivate::CreateIntentVersionResponsePrivate(
    CreateIntentVersionResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding CreateIntentVersion response element from \a xml.
 */
void CreateIntentVersionResponsePrivate::parseCreateIntentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIntentVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
