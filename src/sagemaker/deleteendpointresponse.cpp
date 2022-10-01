// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointresponse.h"
#include "deleteendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEndpointResponse
 * \brief The DeleteEndpointResponse class provides an interace for SageMaker DeleteEndpoint responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::deleteEndpoint
 */

/*!
 * Constructs a DeleteEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEndpointResponse::DeleteEndpointResponse(
        const DeleteEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEndpointRequest * DeleteEndpointResponse::request() const
{
    Q_D(const DeleteEndpointResponse);
    return static_cast<const DeleteEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteEndpoint \a response.
 */
void DeleteEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteEndpointResponsePrivate
 * \brief The DeleteEndpointResponsePrivate class provides private implementation for DeleteEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEndpointResponsePrivate object with public implementation \a q.
 */
DeleteEndpointResponsePrivate::DeleteEndpointResponsePrivate(
    DeleteEndpointResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteEndpoint response element from \a xml.
 */
void DeleteEndpointResponsePrivate::parseDeleteEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
