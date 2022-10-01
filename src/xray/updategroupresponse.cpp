// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategroupresponse.h"
#include "updategroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::UpdateGroupResponse
 * \brief The UpdateGroupResponse class provides an interace for XRay UpdateGroup responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::updateGroup
 */

/*!
 * Constructs a UpdateGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGroupResponse::UpdateGroupResponse(
        const UpdateGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new UpdateGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGroupRequest * UpdateGroupResponse::request() const
{
    Q_D(const UpdateGroupResponse);
    return static_cast<const UpdateGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay UpdateGroup \a response.
 */
void UpdateGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::UpdateGroupResponsePrivate
 * \brief The UpdateGroupResponsePrivate class provides private implementation for UpdateGroupResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a UpdateGroupResponsePrivate object with public implementation \a q.
 */
UpdateGroupResponsePrivate::UpdateGroupResponsePrivate(
    UpdateGroupResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay UpdateGroup response element from \a xml.
 */
void UpdateGroupResponsePrivate::parseUpdateGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
