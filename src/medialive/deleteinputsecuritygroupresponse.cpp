// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinputsecuritygroupresponse.h"
#include "deleteinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupResponse
 * \brief The DeleteInputSecurityGroupResponse class provides an interace for MediaLive DeleteInputSecurityGroup responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteInputSecurityGroup
 */

/*!
 * Constructs a DeleteInputSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInputSecurityGroupResponse::DeleteInputSecurityGroupResponse(
        const DeleteInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteInputSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInputSecurityGroupRequest * DeleteInputSecurityGroupResponse::request() const
{
    Q_D(const DeleteInputSecurityGroupResponse);
    return static_cast<const DeleteInputSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteInputSecurityGroup \a response.
 */
void DeleteInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInputSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupResponsePrivate
 * \brief The DeleteInputSecurityGroupResponsePrivate class provides private implementation for DeleteInputSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteInputSecurityGroupResponsePrivate object with public implementation \a q.
 */
DeleteInputSecurityGroupResponsePrivate::DeleteInputSecurityGroupResponsePrivate(
    DeleteInputSecurityGroupResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteInputSecurityGroup response element from \a xml.
 */
void DeleteInputSecurityGroupResponsePrivate::parseDeleteInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputSecurityGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
