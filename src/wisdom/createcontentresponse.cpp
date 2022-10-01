// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontentresponse.h"
#include "createcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateContentResponse
 * \brief The CreateContentResponse class provides an interace for Wisdom CreateContent responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createContent
 */

/*!
 * Constructs a CreateContentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContentResponse::CreateContentResponse(
        const CreateContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new CreateContentResponsePrivate(this), parent)
{
    setRequest(new CreateContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContentRequest * CreateContentResponse::request() const
{
    Q_D(const CreateContentResponse);
    return static_cast<const CreateContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom CreateContent \a response.
 */
void CreateContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::CreateContentResponsePrivate
 * \brief The CreateContentResponsePrivate class provides private implementation for CreateContentResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateContentResponsePrivate object with public implementation \a q.
 */
CreateContentResponsePrivate::CreateContentResponsePrivate(
    CreateContentResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom CreateContent response element from \a xml.
 */
void CreateContentResponsePrivate::parseCreateContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
