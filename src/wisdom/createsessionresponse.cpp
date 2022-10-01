// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsessionresponse.h"
#include "createsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateSessionResponse
 * \brief The CreateSessionResponse class provides an interace for Wisdom CreateSession responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createSession
 */

/*!
 * Constructs a CreateSessionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSessionResponse::CreateSessionResponse(
        const CreateSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new CreateSessionResponsePrivate(this), parent)
{
    setRequest(new CreateSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSessionRequest * CreateSessionResponse::request() const
{
    Q_D(const CreateSessionResponse);
    return static_cast<const CreateSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom CreateSession \a response.
 */
void CreateSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::CreateSessionResponsePrivate
 * \brief The CreateSessionResponsePrivate class provides private implementation for CreateSessionResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateSessionResponsePrivate object with public implementation \a q.
 */
CreateSessionResponsePrivate::CreateSessionResponsePrivate(
    CreateSessionResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom CreateSession response element from \a xml.
 */
void CreateSessionResponsePrivate::parseCreateSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
