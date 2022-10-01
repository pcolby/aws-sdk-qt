// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrealtimeendpointresponse.h"
#include "createrealtimeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateRealtimeEndpointResponse
 * \brief The CreateRealtimeEndpointResponse class provides an interace for MachineLearning CreateRealtimeEndpoint responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createRealtimeEndpoint
 */

/*!
 * Constructs a CreateRealtimeEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRealtimeEndpointResponse::CreateRealtimeEndpointResponse(
        const CreateRealtimeEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateRealtimeEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateRealtimeEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRealtimeEndpointRequest * CreateRealtimeEndpointResponse::request() const
{
    Q_D(const CreateRealtimeEndpointResponse);
    return static_cast<const CreateRealtimeEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning CreateRealtimeEndpoint \a response.
 */
void CreateRealtimeEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRealtimeEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::CreateRealtimeEndpointResponsePrivate
 * \brief The CreateRealtimeEndpointResponsePrivate class provides private implementation for CreateRealtimeEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateRealtimeEndpointResponsePrivate object with public implementation \a q.
 */
CreateRealtimeEndpointResponsePrivate::CreateRealtimeEndpointResponsePrivate(
    CreateRealtimeEndpointResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning CreateRealtimeEndpoint response element from \a xml.
 */
void CreateRealtimeEndpointResponsePrivate::parseCreateRealtimeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRealtimeEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
