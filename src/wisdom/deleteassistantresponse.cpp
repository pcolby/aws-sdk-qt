// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassistantresponse.h"
#include "deleteassistantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::DeleteAssistantResponse
 * \brief The DeleteAssistantResponse class provides an interace for Wisdom DeleteAssistant responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::deleteAssistant
 */

/*!
 * Constructs a DeleteAssistantResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssistantResponse::DeleteAssistantResponse(
        const DeleteAssistantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new DeleteAssistantResponsePrivate(this), parent)
{
    setRequest(new DeleteAssistantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssistantRequest * DeleteAssistantResponse::request() const
{
    Q_D(const DeleteAssistantResponse);
    return static_cast<const DeleteAssistantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom DeleteAssistant \a response.
 */
void DeleteAssistantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAssistantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::DeleteAssistantResponsePrivate
 * \brief The DeleteAssistantResponsePrivate class provides private implementation for DeleteAssistantResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a DeleteAssistantResponsePrivate object with public implementation \a q.
 */
DeleteAssistantResponsePrivate::DeleteAssistantResponsePrivate(
    DeleteAssistantResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom DeleteAssistant response element from \a xml.
 */
void DeleteAssistantResponsePrivate::parseDeleteAssistantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssistantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
