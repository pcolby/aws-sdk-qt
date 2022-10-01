// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevcenterclientresponse.h"
#include "deletevcenterclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DeleteVcenterClientResponse
 * \brief The DeleteVcenterClientResponse class provides an interace for Mgn DeleteVcenterClient responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::deleteVcenterClient
 */

/*!
 * Constructs a DeleteVcenterClientResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVcenterClientResponse::DeleteVcenterClientResponse(
        const DeleteVcenterClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DeleteVcenterClientResponsePrivate(this), parent)
{
    setRequest(new DeleteVcenterClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVcenterClientRequest * DeleteVcenterClientResponse::request() const
{
    Q_D(const DeleteVcenterClientResponse);
    return static_cast<const DeleteVcenterClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn DeleteVcenterClient \a response.
 */
void DeleteVcenterClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVcenterClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DeleteVcenterClientResponsePrivate
 * \brief The DeleteVcenterClientResponsePrivate class provides private implementation for DeleteVcenterClientResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DeleteVcenterClientResponsePrivate object with public implementation \a q.
 */
DeleteVcenterClientResponsePrivate::DeleteVcenterClientResponsePrivate(
    DeleteVcenterClientResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DeleteVcenterClient response element from \a xml.
 */
void DeleteVcenterClientResponsePrivate::parseDeleteVcenterClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVcenterClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
