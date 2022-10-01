// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassistantassociationresponse.h"
#include "createassistantassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateAssistantAssociationResponse
 * \brief The CreateAssistantAssociationResponse class provides an interace for Wisdom CreateAssistantAssociation responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createAssistantAssociation
 */

/*!
 * Constructs a CreateAssistantAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAssistantAssociationResponse::CreateAssistantAssociationResponse(
        const CreateAssistantAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new CreateAssistantAssociationResponsePrivate(this), parent)
{
    setRequest(new CreateAssistantAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAssistantAssociationRequest * CreateAssistantAssociationResponse::request() const
{
    Q_D(const CreateAssistantAssociationResponse);
    return static_cast<const CreateAssistantAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom CreateAssistantAssociation \a response.
 */
void CreateAssistantAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAssistantAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::CreateAssistantAssociationResponsePrivate
 * \brief The CreateAssistantAssociationResponsePrivate class provides private implementation for CreateAssistantAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateAssistantAssociationResponsePrivate object with public implementation \a q.
 */
CreateAssistantAssociationResponsePrivate::CreateAssistantAssociationResponsePrivate(
    CreateAssistantAssociationResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom CreateAssistantAssociation response element from \a xml.
 */
void CreateAssistantAssociationResponsePrivate::parseCreateAssistantAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssistantAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
