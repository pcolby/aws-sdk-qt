// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappresponse.h"
#include "deleteappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteAppResponse
 * \brief The DeleteAppResponse class provides an interace for Pinpoint DeleteApp responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApp
 */

/*!
 * Constructs a DeleteAppResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppResponse::DeleteAppResponse(
        const DeleteAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteAppResponsePrivate(this), parent)
{
    setRequest(new DeleteAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppRequest * DeleteAppResponse::request() const
{
    Q_D(const DeleteAppResponse);
    return static_cast<const DeleteAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApp \a response.
 */
void DeleteAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteAppResponsePrivate
 * \brief The DeleteAppResponsePrivate class provides private implementation for DeleteAppResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteAppResponsePrivate object with public implementation \a q.
 */
DeleteAppResponsePrivate::DeleteAppResponsePrivate(
    DeleteAppResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApp response element from \a xml.
 */
void DeleteAppResponsePrivate::parseDeleteAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
