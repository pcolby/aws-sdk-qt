// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesourceserverresponse.h"
#include "deletesourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DeleteSourceServerResponse
 * \brief The DeleteSourceServerResponse class provides an interace for Drs DeleteSourceServer responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::deleteSourceServer
 */

/*!
 * Constructs a DeleteSourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSourceServerResponse::DeleteSourceServerResponse(
        const DeleteSourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new DeleteSourceServerResponsePrivate(this), parent)
{
    setRequest(new DeleteSourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSourceServerRequest * DeleteSourceServerResponse::request() const
{
    Q_D(const DeleteSourceServerResponse);
    return static_cast<const DeleteSourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs DeleteSourceServer \a response.
 */
void DeleteSourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::DeleteSourceServerResponsePrivate
 * \brief The DeleteSourceServerResponsePrivate class provides private implementation for DeleteSourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DeleteSourceServerResponsePrivate object with public implementation \a q.
 */
DeleteSourceServerResponsePrivate::DeleteSourceServerResponsePrivate(
    DeleteSourceServerResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs DeleteSourceServer response element from \a xml.
 */
void DeleteSourceServerResponsePrivate::parseDeleteSourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
