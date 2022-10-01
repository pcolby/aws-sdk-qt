// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeknowledgebasetemplateuriresponse.h"
#include "removeknowledgebasetemplateuriresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::RemoveKnowledgeBaseTemplateUriResponse
 * \brief The RemoveKnowledgeBaseTemplateUriResponse class provides an interace for Wisdom RemoveKnowledgeBaseTemplateUri responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::removeKnowledgeBaseTemplateUri
 */

/*!
 * Constructs a RemoveKnowledgeBaseTemplateUriResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveKnowledgeBaseTemplateUriResponse::RemoveKnowledgeBaseTemplateUriResponse(
        const RemoveKnowledgeBaseTemplateUriRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new RemoveKnowledgeBaseTemplateUriResponsePrivate(this), parent)
{
    setRequest(new RemoveKnowledgeBaseTemplateUriRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveKnowledgeBaseTemplateUriRequest * RemoveKnowledgeBaseTemplateUriResponse::request() const
{
    Q_D(const RemoveKnowledgeBaseTemplateUriResponse);
    return static_cast<const RemoveKnowledgeBaseTemplateUriRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom RemoveKnowledgeBaseTemplateUri \a response.
 */
void RemoveKnowledgeBaseTemplateUriResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveKnowledgeBaseTemplateUriResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::RemoveKnowledgeBaseTemplateUriResponsePrivate
 * \brief The RemoveKnowledgeBaseTemplateUriResponsePrivate class provides private implementation for RemoveKnowledgeBaseTemplateUriResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a RemoveKnowledgeBaseTemplateUriResponsePrivate object with public implementation \a q.
 */
RemoveKnowledgeBaseTemplateUriResponsePrivate::RemoveKnowledgeBaseTemplateUriResponsePrivate(
    RemoveKnowledgeBaseTemplateUriResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom RemoveKnowledgeBaseTemplateUri response element from \a xml.
 */
void RemoveKnowledgeBaseTemplateUriResponsePrivate::parseRemoveKnowledgeBaseTemplateUriResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveKnowledgeBaseTemplateUriResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
