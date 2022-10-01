// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeflowoutputresponse.h"
#include "removeflowoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowOutputResponse
 * \brief The RemoveFlowOutputResponse class provides an interace for MediaConnect RemoveFlowOutput responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowOutput
 */

/*!
 * Constructs a RemoveFlowOutputResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFlowOutputResponse::RemoveFlowOutputResponse(
        const RemoveFlowOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new RemoveFlowOutputResponsePrivate(this), parent)
{
    setRequest(new RemoveFlowOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFlowOutputRequest * RemoveFlowOutputResponse::request() const
{
    Q_D(const RemoveFlowOutputResponse);
    return static_cast<const RemoveFlowOutputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect RemoveFlowOutput \a response.
 */
void RemoveFlowOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFlowOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowOutputResponsePrivate
 * \brief The RemoveFlowOutputResponsePrivate class provides private implementation for RemoveFlowOutputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowOutputResponsePrivate object with public implementation \a q.
 */
RemoveFlowOutputResponsePrivate::RemoveFlowOutputResponsePrivate(
    RemoveFlowOutputResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect RemoveFlowOutput response element from \a xml.
 */
void RemoveFlowOutputResponsePrivate::parseRemoveFlowOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFlowOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
