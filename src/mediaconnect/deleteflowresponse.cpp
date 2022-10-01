// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteflowresponse.h"
#include "deleteflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DeleteFlowResponse
 * \brief The DeleteFlowResponse class provides an interace for MediaConnect DeleteFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::deleteFlow
 */

/*!
 * Constructs a DeleteFlowResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFlowResponse::DeleteFlowResponse(
        const DeleteFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new DeleteFlowResponsePrivate(this), parent)
{
    setRequest(new DeleteFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFlowRequest * DeleteFlowResponse::request() const
{
    Q_D(const DeleteFlowResponse);
    return static_cast<const DeleteFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect DeleteFlow \a response.
 */
void DeleteFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::DeleteFlowResponsePrivate
 * \brief The DeleteFlowResponsePrivate class provides private implementation for DeleteFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DeleteFlowResponsePrivate object with public implementation \a q.
 */
DeleteFlowResponsePrivate::DeleteFlowResponsePrivate(
    DeleteFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect DeleteFlow response element from \a xml.
 */
void DeleteFlowResponsePrivate::parseDeleteFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
