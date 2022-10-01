// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createoriginendpointresponse.h"
#include "createoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateOriginEndpointResponse
 * \brief The CreateOriginEndpointResponse class provides an interace for MediaPackage CreateOriginEndpoint responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createOriginEndpoint
 */

/*!
 * Constructs a CreateOriginEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOriginEndpointResponse::CreateOriginEndpointResponse(
        const CreateOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new CreateOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateOriginEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOriginEndpointRequest * CreateOriginEndpointResponse::request() const
{
    Q_D(const CreateOriginEndpointResponse);
    return static_cast<const CreateOriginEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage CreateOriginEndpoint \a response.
 */
void CreateOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::CreateOriginEndpointResponsePrivate
 * \brief The CreateOriginEndpointResponsePrivate class provides private implementation for CreateOriginEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateOriginEndpointResponsePrivate object with public implementation \a q.
 */
CreateOriginEndpointResponsePrivate::CreateOriginEndpointResponsePrivate(
    CreateOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage CreateOriginEndpoint response element from \a xml.
 */
void CreateOriginEndpointResponsePrivate::parseCreateOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOriginEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
