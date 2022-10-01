// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateknowledgebasetemplateuriresponse.h"
#include "updateknowledgebasetemplateuriresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::UpdateKnowledgeBaseTemplateUriResponse
 * \brief The UpdateKnowledgeBaseTemplateUriResponse class provides an interace for Wisdom UpdateKnowledgeBaseTemplateUri responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::updateKnowledgeBaseTemplateUri
 */

/*!
 * Constructs a UpdateKnowledgeBaseTemplateUriResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateKnowledgeBaseTemplateUriResponse::UpdateKnowledgeBaseTemplateUriResponse(
        const UpdateKnowledgeBaseTemplateUriRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new UpdateKnowledgeBaseTemplateUriResponsePrivate(this), parent)
{
    setRequest(new UpdateKnowledgeBaseTemplateUriRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateKnowledgeBaseTemplateUriRequest * UpdateKnowledgeBaseTemplateUriResponse::request() const
{
    Q_D(const UpdateKnowledgeBaseTemplateUriResponse);
    return static_cast<const UpdateKnowledgeBaseTemplateUriRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom UpdateKnowledgeBaseTemplateUri \a response.
 */
void UpdateKnowledgeBaseTemplateUriResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateKnowledgeBaseTemplateUriResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::UpdateKnowledgeBaseTemplateUriResponsePrivate
 * \brief The UpdateKnowledgeBaseTemplateUriResponsePrivate class provides private implementation for UpdateKnowledgeBaseTemplateUriResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a UpdateKnowledgeBaseTemplateUriResponsePrivate object with public implementation \a q.
 */
UpdateKnowledgeBaseTemplateUriResponsePrivate::UpdateKnowledgeBaseTemplateUriResponsePrivate(
    UpdateKnowledgeBaseTemplateUriResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom UpdateKnowledgeBaseTemplateUri response element from \a xml.
 */
void UpdateKnowledgeBaseTemplateUriResponsePrivate::parseUpdateKnowledgeBaseTemplateUriResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateKnowledgeBaseTemplateUriResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
