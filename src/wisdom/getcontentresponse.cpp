// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontentresponse.h"
#include "getcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetContentResponse
 * \brief The GetContentResponse class provides an interace for Wisdom GetContent responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getContent
 */

/*!
 * Constructs a GetContentResponse object for \a reply to \a request, with parent \a parent.
 */
GetContentResponse::GetContentResponse(
        const GetContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new GetContentResponsePrivate(this), parent)
{
    setRequest(new GetContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContentRequest * GetContentResponse::request() const
{
    Q_D(const GetContentResponse);
    return static_cast<const GetContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom GetContent \a response.
 */
void GetContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::GetContentResponsePrivate
 * \brief The GetContentResponsePrivate class provides private implementation for GetContentResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetContentResponsePrivate object with public implementation \a q.
 */
GetContentResponsePrivate::GetContentResponsePrivate(
    GetContentResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom GetContent response element from \a xml.
 */
void GetContentResponsePrivate::parseGetContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
