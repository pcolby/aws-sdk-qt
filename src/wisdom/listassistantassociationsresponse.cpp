// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassistantassociationsresponse.h"
#include "listassistantassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::ListAssistantAssociationsResponse
 * \brief The ListAssistantAssociationsResponse class provides an interace for Wisdom ListAssistantAssociations responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::listAssistantAssociations
 */

/*!
 * Constructs a ListAssistantAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssistantAssociationsResponse::ListAssistantAssociationsResponse(
        const ListAssistantAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new ListAssistantAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListAssistantAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssistantAssociationsRequest * ListAssistantAssociationsResponse::request() const
{
    Q_D(const ListAssistantAssociationsResponse);
    return static_cast<const ListAssistantAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom ListAssistantAssociations \a response.
 */
void ListAssistantAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssistantAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::ListAssistantAssociationsResponsePrivate
 * \brief The ListAssistantAssociationsResponsePrivate class provides private implementation for ListAssistantAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a ListAssistantAssociationsResponsePrivate object with public implementation \a q.
 */
ListAssistantAssociationsResponsePrivate::ListAssistantAssociationsResponsePrivate(
    ListAssistantAssociationsResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom ListAssistantAssociations response element from \a xml.
 */
void ListAssistantAssociationsResponsePrivate::parseListAssistantAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssistantAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
