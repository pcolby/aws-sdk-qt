// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeattributesresponse.h"
#include "removeattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::RemoveAttributesResponse
 * \brief The RemoveAttributesResponse class provides an interace for Pinpoint RemoveAttributes responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::removeAttributes
 */

/*!
 * Constructs a RemoveAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveAttributesResponse::RemoveAttributesResponse(
        const RemoveAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new RemoveAttributesResponsePrivate(this), parent)
{
    setRequest(new RemoveAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveAttributesRequest * RemoveAttributesResponse::request() const
{
    Q_D(const RemoveAttributesResponse);
    return static_cast<const RemoveAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint RemoveAttributes \a response.
 */
void RemoveAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::RemoveAttributesResponsePrivate
 * \brief The RemoveAttributesResponsePrivate class provides private implementation for RemoveAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a RemoveAttributesResponsePrivate object with public implementation \a q.
 */
RemoveAttributesResponsePrivate::RemoveAttributesResponsePrivate(
    RemoveAttributesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint RemoveAttributes response element from \a xml.
 */
void RemoveAttributesResponsePrivate::parseRemoveAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
