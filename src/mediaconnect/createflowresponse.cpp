// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createflowresponse.h"
#include "createflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::CreateFlowResponse
 * \brief The CreateFlowResponse class provides an interace for MediaConnect CreateFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::createFlow
 */

/*!
 * Constructs a CreateFlowResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFlowResponse::CreateFlowResponse(
        const CreateFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new CreateFlowResponsePrivate(this), parent)
{
    setRequest(new CreateFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFlowRequest * CreateFlowResponse::request() const
{
    Q_D(const CreateFlowResponse);
    return static_cast<const CreateFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect CreateFlow \a response.
 */
void CreateFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::CreateFlowResponsePrivate
 * \brief The CreateFlowResponsePrivate class provides private implementation for CreateFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a CreateFlowResponsePrivate object with public implementation \a q.
 */
CreateFlowResponsePrivate::CreateFlowResponsePrivate(
    CreateFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect CreateFlow response element from \a xml.
 */
void CreateFlowResponsePrivate::parseCreateFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
