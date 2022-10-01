// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevendpointresponse.h"
#include "createdevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateDevEndpointResponse
 * \brief The CreateDevEndpointResponse class provides an interace for Glue CreateDevEndpoint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createDevEndpoint
 */

/*!
 * Constructs a CreateDevEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDevEndpointResponse::CreateDevEndpointResponse(
        const CreateDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateDevEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateDevEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDevEndpointRequest * CreateDevEndpointResponse::request() const
{
    Q_D(const CreateDevEndpointResponse);
    return static_cast<const CreateDevEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateDevEndpoint \a response.
 */
void CreateDevEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateDevEndpointResponsePrivate
 * \brief The CreateDevEndpointResponsePrivate class provides private implementation for CreateDevEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateDevEndpointResponsePrivate object with public implementation \a q.
 */
CreateDevEndpointResponsePrivate::CreateDevEndpointResponsePrivate(
    CreateDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateDevEndpoint response element from \a xml.
 */
void CreateDevEndpointResponsePrivate::parseCreateDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDevEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
