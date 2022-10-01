// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontentresponse.h"
#include "updatecontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::UpdateContentResponse
 * \brief The UpdateContentResponse class provides an interace for Wisdom UpdateContent responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::updateContent
 */

/*!
 * Constructs a UpdateContentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContentResponse::UpdateContentResponse(
        const UpdateContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new UpdateContentResponsePrivate(this), parent)
{
    setRequest(new UpdateContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContentRequest * UpdateContentResponse::request() const
{
    Q_D(const UpdateContentResponse);
    return static_cast<const UpdateContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom UpdateContent \a response.
 */
void UpdateContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::UpdateContentResponsePrivate
 * \brief The UpdateContentResponsePrivate class provides private implementation for UpdateContentResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a UpdateContentResponsePrivate object with public implementation \a q.
 */
UpdateContentResponsePrivate::UpdateContentResponsePrivate(
    UpdateContentResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom UpdateContent response element from \a xml.
 */
void UpdateContentResponsePrivate::parseUpdateContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
