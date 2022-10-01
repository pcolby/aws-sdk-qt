// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassistantresponse.h"
#include "createassistantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateAssistantResponse
 * \brief The CreateAssistantResponse class provides an interace for Wisdom CreateAssistant responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createAssistant
 */

/*!
 * Constructs a CreateAssistantResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAssistantResponse::CreateAssistantResponse(
        const CreateAssistantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new CreateAssistantResponsePrivate(this), parent)
{
    setRequest(new CreateAssistantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAssistantRequest * CreateAssistantResponse::request() const
{
    Q_D(const CreateAssistantResponse);
    return static_cast<const CreateAssistantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom CreateAssistant \a response.
 */
void CreateAssistantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAssistantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::CreateAssistantResponsePrivate
 * \brief The CreateAssistantResponsePrivate class provides private implementation for CreateAssistantResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateAssistantResponsePrivate object with public implementation \a q.
 */
CreateAssistantResponsePrivate::CreateAssistantResponsePrivate(
    CreateAssistantResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom CreateAssistant response element from \a xml.
 */
void CreateAssistantResponsePrivate::parseCreateAssistantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssistantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
