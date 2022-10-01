// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelresponse.h"
#include "deletechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DeleteChannelResponse
 * \brief The DeleteChannelResponse class provides an interace for MediaPackage DeleteChannel responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::deleteChannel
 */

/*!
 * Constructs a DeleteChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteChannelResponse::DeleteChannelResponse(
        const DeleteChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DeleteChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteChannelRequest * DeleteChannelResponse::request() const
{
    Q_D(const DeleteChannelResponse);
    return static_cast<const DeleteChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage DeleteChannel \a response.
 */
void DeleteChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::DeleteChannelResponsePrivate
 * \brief The DeleteChannelResponsePrivate class provides private implementation for DeleteChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DeleteChannelResponsePrivate object with public implementation \a q.
 */
DeleteChannelResponsePrivate::DeleteChannelResponsePrivate(
    DeleteChannelResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage DeleteChannel response element from \a xml.
 */
void DeleteChannelResponsePrivate::parseDeleteChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
