// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesourceserverresponse.h"
#include "deletesourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DeleteSourceServerResponse
 * \brief The DeleteSourceServerResponse class provides an interace for Mgn DeleteSourceServer responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::deleteSourceServer
 */

/*!
 * Constructs a DeleteSourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSourceServerResponse::DeleteSourceServerResponse(
        const DeleteSourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DeleteSourceServerResponsePrivate(this), parent)
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
 * Parses a successful Mgn DeleteSourceServer \a response.
 */
void DeleteSourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DeleteSourceServerResponsePrivate
 * \brief The DeleteSourceServerResponsePrivate class provides private implementation for DeleteSourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DeleteSourceServerResponsePrivate object with public implementation \a q.
 */
DeleteSourceServerResponsePrivate::DeleteSourceServerResponsePrivate(
    DeleteSourceServerResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DeleteSourceServer response element from \a xml.
 */
void DeleteSourceServerResponsePrivate::parseDeleteSourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
