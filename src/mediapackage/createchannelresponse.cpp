// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelresponse.h"
#include "createchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateChannelResponse
 * \brief The CreateChannelResponse class provides an interace for MediaPackage CreateChannel responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createChannel
 */

/*!
 * Constructs a CreateChannelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateChannelResponse::CreateChannelResponse(
        const CreateChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new CreateChannelResponsePrivate(this), parent)
{
    setRequest(new CreateChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateChannelRequest * CreateChannelResponse::request() const
{
    Q_D(const CreateChannelResponse);
    return static_cast<const CreateChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage CreateChannel \a response.
 */
void CreateChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::CreateChannelResponsePrivate
 * \brief The CreateChannelResponsePrivate class provides private implementation for CreateChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateChannelResponsePrivate object with public implementation \a q.
 */
CreateChannelResponsePrivate::CreateChannelResponsePrivate(
    CreateChannelResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage CreateChannel response element from \a xml.
 */
void CreateChannelResponsePrivate::parseCreateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
