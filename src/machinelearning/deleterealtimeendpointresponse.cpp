// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterealtimeendpointresponse.h"
#include "deleterealtimeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteRealtimeEndpointResponse
 * \brief The DeleteRealtimeEndpointResponse class provides an interace for MachineLearning DeleteRealtimeEndpoint responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteRealtimeEndpoint
 */

/*!
 * Constructs a DeleteRealtimeEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRealtimeEndpointResponse::DeleteRealtimeEndpointResponse(
        const DeleteRealtimeEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteRealtimeEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteRealtimeEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRealtimeEndpointRequest * DeleteRealtimeEndpointResponse::request() const
{
    Q_D(const DeleteRealtimeEndpointResponse);
    return static_cast<const DeleteRealtimeEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DeleteRealtimeEndpoint \a response.
 */
void DeleteRealtimeEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRealtimeEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DeleteRealtimeEndpointResponsePrivate
 * \brief The DeleteRealtimeEndpointResponsePrivate class provides private implementation for DeleteRealtimeEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteRealtimeEndpointResponsePrivate object with public implementation \a q.
 */
DeleteRealtimeEndpointResponsePrivate::DeleteRealtimeEndpointResponsePrivate(
    DeleteRealtimeEndpointResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DeleteRealtimeEndpoint response element from \a xml.
 */
void DeleteRealtimeEndpointResponsePrivate::parseDeleteRealtimeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRealtimeEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
