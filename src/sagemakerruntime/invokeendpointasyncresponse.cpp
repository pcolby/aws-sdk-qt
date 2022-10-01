// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "invokeendpointasyncresponse.h"
#include "invokeendpointasyncresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointAsyncResponse
 * \brief The InvokeEndpointAsyncResponse class provides an interace for SageMakerRuntime InvokeEndpointAsync responses.
 *
 * \inmodule QtAwsSageMakerRuntime
 *
 *  The Amazon SageMaker runtime API.
 *
 * \sa SageMakerRuntimeClient::invokeEndpointAsync
 */

/*!
 * Constructs a InvokeEndpointAsyncResponse object for \a reply to \a request, with parent \a parent.
 */
InvokeEndpointAsyncResponse::InvokeEndpointAsyncResponse(
        const InvokeEndpointAsyncRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerRuntimeResponse(new InvokeEndpointAsyncResponsePrivate(this), parent)
{
    setRequest(new InvokeEndpointAsyncRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InvokeEndpointAsyncRequest * InvokeEndpointAsyncResponse::request() const
{
    Q_D(const InvokeEndpointAsyncResponse);
    return static_cast<const InvokeEndpointAsyncRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMakerRuntime InvokeEndpointAsync \a response.
 */
void InvokeEndpointAsyncResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InvokeEndpointAsyncResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointAsyncResponsePrivate
 * \brief The InvokeEndpointAsyncResponsePrivate class provides private implementation for InvokeEndpointAsyncResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a InvokeEndpointAsyncResponsePrivate object with public implementation \a q.
 */
InvokeEndpointAsyncResponsePrivate::InvokeEndpointAsyncResponsePrivate(
    InvokeEndpointAsyncResponse * const q) : SageMakerRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a SageMakerRuntime InvokeEndpointAsync response element from \a xml.
 */
void InvokeEndpointAsyncResponsePrivate::parseInvokeEndpointAsyncResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeEndpointAsyncResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMakerRuntime
} // namespace QtAws
