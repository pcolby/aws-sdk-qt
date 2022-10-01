// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeflowsourceresponse.h"
#include "removeflowsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowSourceResponse
 * \brief The RemoveFlowSourceResponse class provides an interace for MediaConnect RemoveFlowSource responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowSource
 */

/*!
 * Constructs a RemoveFlowSourceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFlowSourceResponse::RemoveFlowSourceResponse(
        const RemoveFlowSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new RemoveFlowSourceResponsePrivate(this), parent)
{
    setRequest(new RemoveFlowSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFlowSourceRequest * RemoveFlowSourceResponse::request() const
{
    Q_D(const RemoveFlowSourceResponse);
    return static_cast<const RemoveFlowSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect RemoveFlowSource \a response.
 */
void RemoveFlowSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFlowSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowSourceResponsePrivate
 * \brief The RemoveFlowSourceResponsePrivate class provides private implementation for RemoveFlowSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowSourceResponsePrivate object with public implementation \a q.
 */
RemoveFlowSourceResponsePrivate::RemoveFlowSourceResponsePrivate(
    RemoveFlowSourceResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect RemoveFlowSource response element from \a xml.
 */
void RemoveFlowSourceResponsePrivate::parseRemoveFlowSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFlowSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
