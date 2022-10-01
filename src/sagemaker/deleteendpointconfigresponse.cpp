// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointconfigresponse.h"
#include "deleteendpointconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEndpointConfigResponse
 * \brief The DeleteEndpointConfigResponse class provides an interace for SageMaker DeleteEndpointConfig responses.
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
 * \sa SageMakerClient::deleteEndpointConfig
 */

/*!
 * Constructs a DeleteEndpointConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEndpointConfigResponse::DeleteEndpointConfigResponse(
        const DeleteEndpointConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteEndpointConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEndpointConfigRequest * DeleteEndpointConfigResponse::request() const
{
    Q_D(const DeleteEndpointConfigResponse);
    return static_cast<const DeleteEndpointConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteEndpointConfig \a response.
 */
void DeleteEndpointConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEndpointConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteEndpointConfigResponsePrivate
 * \brief The DeleteEndpointConfigResponsePrivate class provides private implementation for DeleteEndpointConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEndpointConfigResponsePrivate object with public implementation \a q.
 */
DeleteEndpointConfigResponsePrivate::DeleteEndpointConfigResponsePrivate(
    DeleteEndpointConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteEndpointConfig response element from \a xml.
 */
void DeleteEndpointConfigResponsePrivate::parseDeleteEndpointConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
