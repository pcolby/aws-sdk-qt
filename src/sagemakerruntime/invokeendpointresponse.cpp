// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "invokeendpointresponse.h"
#include "invokeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointResponse
 * \brief The InvokeEndpointResponse class provides an interace for SageMakerRuntime InvokeEndpoint responses.
 *
 * \inmodule QtAwsSageMakerRuntime
 *
 *  The Amazon SageMaker runtime API.
 *
 * \sa SageMakerRuntimeClient::invokeEndpoint
 */

/*!
 * Constructs a InvokeEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
InvokeEndpointResponse::InvokeEndpointResponse(
        const InvokeEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerRuntimeResponse(new InvokeEndpointResponsePrivate(this), parent)
{
    setRequest(new InvokeEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InvokeEndpointRequest * InvokeEndpointResponse::request() const
{
    Q_D(const InvokeEndpointResponse);
    return static_cast<const InvokeEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMakerRuntime InvokeEndpoint \a response.
 */
void InvokeEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InvokeEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointResponsePrivate
 * \brief The InvokeEndpointResponsePrivate class provides private implementation for InvokeEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a InvokeEndpointResponsePrivate object with public implementation \a q.
 */
InvokeEndpointResponsePrivate::InvokeEndpointResponsePrivate(
    InvokeEndpointResponse * const q) : SageMakerRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a SageMakerRuntime InvokeEndpoint response element from \a xml.
 */
void InvokeEndpointResponsePrivate::parseInvokeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMakerRuntime
} // namespace QtAws
