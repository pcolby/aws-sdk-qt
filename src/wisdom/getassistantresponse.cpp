// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassistantresponse.h"
#include "getassistantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetAssistantResponse
 * \brief The GetAssistantResponse class provides an interace for Wisdom GetAssistant responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getAssistant
 */

/*!
 * Constructs a GetAssistantResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssistantResponse::GetAssistantResponse(
        const GetAssistantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new GetAssistantResponsePrivate(this), parent)
{
    setRequest(new GetAssistantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssistantRequest * GetAssistantResponse::request() const
{
    Q_D(const GetAssistantResponse);
    return static_cast<const GetAssistantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom GetAssistant \a response.
 */
void GetAssistantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssistantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::GetAssistantResponsePrivate
 * \brief The GetAssistantResponsePrivate class provides private implementation for GetAssistantResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetAssistantResponsePrivate object with public implementation \a q.
 */
GetAssistantResponsePrivate::GetAssistantResponsePrivate(
    GetAssistantResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom GetAssistant response element from \a xml.
 */
void GetAssistantResponsePrivate::parseGetAssistantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssistantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
