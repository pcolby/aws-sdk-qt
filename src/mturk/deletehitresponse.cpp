// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehitresponse.h"
#include "deletehitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteHITResponse
 * \brief The DeleteHITResponse class provides an interace for MTurk DeleteHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteHIT
 */

/*!
 * Constructs a DeleteHITResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHITResponse::DeleteHITResponse(
        const DeleteHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteHITResponsePrivate(this), parent)
{
    setRequest(new DeleteHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHITRequest * DeleteHITResponse::request() const
{
    Q_D(const DeleteHITResponse);
    return static_cast<const DeleteHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk DeleteHIT \a response.
 */
void DeleteHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::DeleteHITResponsePrivate
 * \brief The DeleteHITResponsePrivate class provides private implementation for DeleteHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteHITResponsePrivate object with public implementation \a q.
 */
DeleteHITResponsePrivate::DeleteHITResponsePrivate(
    DeleteHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk DeleteHIT response element from \a xml.
 */
void DeleteHITResponsePrivate::parseDeleteHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
