/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    return static_cast<const InvokeEndpointRequest *>(SageMakerRuntimeResponse::request());
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
