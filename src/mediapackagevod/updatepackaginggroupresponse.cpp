// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepackaginggroupresponse.h"
#include "updatepackaginggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::UpdatePackagingGroupResponse
 * \brief The UpdatePackagingGroupResponse class provides an interace for MediaPackageVod UpdatePackagingGroup responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::updatePackagingGroup
 */

/*!
 * Constructs a UpdatePackagingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePackagingGroupResponse::UpdatePackagingGroupResponse(
        const UpdatePackagingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new UpdatePackagingGroupResponsePrivate(this), parent)
{
    setRequest(new UpdatePackagingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePackagingGroupRequest * UpdatePackagingGroupResponse::request() const
{
    Q_D(const UpdatePackagingGroupResponse);
    return static_cast<const UpdatePackagingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod UpdatePackagingGroup \a response.
 */
void UpdatePackagingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePackagingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::UpdatePackagingGroupResponsePrivate
 * \brief The UpdatePackagingGroupResponsePrivate class provides private implementation for UpdatePackagingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a UpdatePackagingGroupResponsePrivate object with public implementation \a q.
 */
UpdatePackagingGroupResponsePrivate::UpdatePackagingGroupResponsePrivate(
    UpdatePackagingGroupResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod UpdatePackagingGroup response element from \a xml.
 */
void UpdatePackagingGroupResponsePrivate::parseUpdatePackagingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePackagingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
