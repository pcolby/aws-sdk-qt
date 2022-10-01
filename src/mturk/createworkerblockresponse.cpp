// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkerblockresponse.h"
#include "createworkerblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateWorkerBlockResponse
 * \brief The CreateWorkerBlockResponse class provides an interace for MTurk CreateWorkerBlock responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createWorkerBlock
 */

/*!
 * Constructs a CreateWorkerBlockResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkerBlockResponse::CreateWorkerBlockResponse(
        const CreateWorkerBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateWorkerBlockResponsePrivate(this), parent)
{
    setRequest(new CreateWorkerBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkerBlockRequest * CreateWorkerBlockResponse::request() const
{
    Q_D(const CreateWorkerBlockResponse);
    return static_cast<const CreateWorkerBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk CreateWorkerBlock \a response.
 */
void CreateWorkerBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkerBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateWorkerBlockResponsePrivate
 * \brief The CreateWorkerBlockResponsePrivate class provides private implementation for CreateWorkerBlockResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateWorkerBlockResponsePrivate object with public implementation \a q.
 */
CreateWorkerBlockResponsePrivate::CreateWorkerBlockResponsePrivate(
    CreateWorkerBlockResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateWorkerBlock response element from \a xml.
 */
void CreateWorkerBlockResponsePrivate::parseCreateWorkerBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkerBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
