// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinputsecuritygroupresponse.h"
#include "updateinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputSecurityGroupResponse
 * \brief The UpdateInputSecurityGroupResponse class provides an interace for MediaLive UpdateInputSecurityGroup responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInputSecurityGroup
 */

/*!
 * Constructs a UpdateInputSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInputSecurityGroupResponse::UpdateInputSecurityGroupResponse(
        const UpdateInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateInputSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInputSecurityGroupRequest * UpdateInputSecurityGroupResponse::request() const
{
    Q_D(const UpdateInputSecurityGroupResponse);
    return static_cast<const UpdateInputSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateInputSecurityGroup \a response.
 */
void UpdateInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInputSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateInputSecurityGroupResponsePrivate
 * \brief The UpdateInputSecurityGroupResponsePrivate class provides private implementation for UpdateInputSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputSecurityGroupResponsePrivate object with public implementation \a q.
 */
UpdateInputSecurityGroupResponsePrivate::UpdateInputSecurityGroupResponsePrivate(
    UpdateInputSecurityGroupResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateInputSecurityGroup response element from \a xml.
 */
void UpdateInputSecurityGroupResponsePrivate::parseUpdateInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInputSecurityGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
