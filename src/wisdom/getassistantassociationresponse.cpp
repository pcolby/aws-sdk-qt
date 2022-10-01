// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassistantassociationresponse.h"
#include "getassistantassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetAssistantAssociationResponse
 * \brief The GetAssistantAssociationResponse class provides an interace for Wisdom GetAssistantAssociation responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getAssistantAssociation
 */

/*!
 * Constructs a GetAssistantAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssistantAssociationResponse::GetAssistantAssociationResponse(
        const GetAssistantAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new GetAssistantAssociationResponsePrivate(this), parent)
{
    setRequest(new GetAssistantAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssistantAssociationRequest * GetAssistantAssociationResponse::request() const
{
    Q_D(const GetAssistantAssociationResponse);
    return static_cast<const GetAssistantAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom GetAssistantAssociation \a response.
 */
void GetAssistantAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssistantAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::GetAssistantAssociationResponsePrivate
 * \brief The GetAssistantAssociationResponsePrivate class provides private implementation for GetAssistantAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetAssistantAssociationResponsePrivate object with public implementation \a q.
 */
GetAssistantAssociationResponsePrivate::GetAssistantAssociationResponsePrivate(
    GetAssistantAssociationResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom GetAssistantAssociation response element from \a xml.
 */
void GetAssistantAssociationResponsePrivate::parseGetAssistantAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssistantAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
