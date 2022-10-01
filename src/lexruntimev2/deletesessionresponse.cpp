// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesessionresponse.h"
#include "deletesessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::DeleteSessionResponse
 * \brief The DeleteSessionResponse class provides an interace for LexRuntimeV2 DeleteSession responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::deleteSession
 */

/*!
 * Constructs a DeleteSessionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSessionResponse::DeleteSessionResponse(
        const DeleteSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new DeleteSessionResponsePrivate(this), parent)
{
    setRequest(new DeleteSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSessionRequest * DeleteSessionResponse::request() const
{
    Q_D(const DeleteSessionResponse);
    return static_cast<const DeleteSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 DeleteSession \a response.
 */
void DeleteSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::DeleteSessionResponsePrivate
 * \brief The DeleteSessionResponsePrivate class provides private implementation for DeleteSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a DeleteSessionResponsePrivate object with public implementation \a q.
 */
DeleteSessionResponsePrivate::DeleteSessionResponsePrivate(
    DeleteSessionResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 DeleteSession response element from \a xml.
 */
void DeleteSessionResponsePrivate::parseDeleteSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
