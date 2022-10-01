// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createendpointresponse.h"
#include "createendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::CreateEndpointResponse
 * \brief The CreateEndpointResponse class provides an interace for S3Outposts CreateEndpoint responses.
 *
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 *
 * \sa S3OutpostsClient::createEndpoint
 */

/*!
 * Constructs a CreateEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEndpointResponse::CreateEndpointResponse(
        const CreateEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3OutpostsResponse(new CreateEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEndpointRequest * CreateEndpointResponse::request() const
{
    Q_D(const CreateEndpointResponse);
    return static_cast<const CreateEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Outposts CreateEndpoint \a response.
 */
void CreateEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Outposts::CreateEndpointResponsePrivate
 * \brief The CreateEndpointResponsePrivate class provides private implementation for CreateEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a CreateEndpointResponsePrivate object with public implementation \a q.
 */
CreateEndpointResponsePrivate::CreateEndpointResponsePrivate(
    CreateEndpointResponse * const q) : S3OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a S3Outposts CreateEndpoint response element from \a xml.
 */
void CreateEndpointResponsePrivate::parseCreateEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Outposts
} // namespace QtAws
