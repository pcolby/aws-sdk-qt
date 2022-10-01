// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGINGGROUPRESPONSE_H
#define QTAWS_UPDATEPACKAGINGGROUPRESPONSE_H

#include "mediapackagevodresponse.h"
#include "updatepackaginggrouprequest.h"

namespace QtAws {
namespace MediaPackageVod {

class UpdatePackagingGroupResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT UpdatePackagingGroupResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    UpdatePackagingGroupResponse(const UpdatePackagingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePackagingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePackagingGroupResponse)
    Q_DISABLE_COPY(UpdatePackagingGroupResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
