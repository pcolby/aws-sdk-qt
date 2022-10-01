// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontentresponse.h"
#include "deletecontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::DeleteContentResponse
 * \brief The DeleteContentResponse class provides an interace for Wisdom DeleteContent responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::deleteContent
 */

/*!
 * Constructs a DeleteContentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContentResponse::DeleteContentResponse(
        const DeleteContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new DeleteContentResponsePrivate(this), parent)
{
    setRequest(new DeleteContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContentRequest * DeleteContentResponse::request() const
{
    Q_D(const DeleteContentResponse);
    return static_cast<const DeleteContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom DeleteContent \a response.
 */
void DeleteContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::DeleteContentResponsePrivate
 * \brief The DeleteContentResponsePrivate class provides private implementation for DeleteContentResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a DeleteContentResponsePrivate object with public implementation \a q.
 */
DeleteContentResponsePrivate::DeleteContentResponsePrivate(
    DeleteContentResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom DeleteContent response element from \a xml.
 */
void DeleteContentResponsePrivate::parseDeleteContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
