// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassistantassociationresponse.h"
#include "deleteassistantassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::DeleteAssistantAssociationResponse
 * \brief The DeleteAssistantAssociationResponse class provides an interace for Wisdom DeleteAssistantAssociation responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::deleteAssistantAssociation
 */

/*!
 * Constructs a DeleteAssistantAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssistantAssociationResponse::DeleteAssistantAssociationResponse(
        const DeleteAssistantAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new DeleteAssistantAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteAssistantAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssistantAssociationRequest * DeleteAssistantAssociationResponse::request() const
{
    Q_D(const DeleteAssistantAssociationResponse);
    return static_cast<const DeleteAssistantAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom DeleteAssistantAssociation \a response.
 */
void DeleteAssistantAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAssistantAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::DeleteAssistantAssociationResponsePrivate
 * \brief The DeleteAssistantAssociationResponsePrivate class provides private implementation for DeleteAssistantAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a DeleteAssistantAssociationResponsePrivate object with public implementation \a q.
 */
DeleteAssistantAssociationResponsePrivate::DeleteAssistantAssociationResponsePrivate(
    DeleteAssistantAssociationResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom DeleteAssistantAssociation response element from \a xml.
 */
void DeleteAssistantAssociationResponsePrivate::parseDeleteAssistantAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssistantAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
