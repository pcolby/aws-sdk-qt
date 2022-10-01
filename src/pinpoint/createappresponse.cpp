// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappresponse.h"
#include "createappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateAppResponse
 * \brief The CreateAppResponse class provides an interace for Pinpoint CreateApp responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createApp
 */

/*!
 * Constructs a CreateAppResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAppResponse::CreateAppResponse(
        const CreateAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateAppResponsePrivate(this), parent)
{
    setRequest(new CreateAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAppRequest * CreateAppResponse::request() const
{
    Q_D(const CreateAppResponse);
    return static_cast<const CreateAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateApp \a response.
 */
void CreateAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateAppResponsePrivate
 * \brief The CreateAppResponsePrivate class provides private implementation for CreateAppResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateAppResponsePrivate object with public implementation \a q.
 */
CreateAppResponsePrivate::CreateAppResponsePrivate(
    CreateAppResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateApp response element from \a xml.
 */
void CreateAppResponsePrivate::parseCreateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
