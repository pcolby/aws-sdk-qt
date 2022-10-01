// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGINGGROUPRESPONSE_P_H
#define QTAWS_UPDATEPACKAGINGGROUPRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class UpdatePackagingGroupResponse;

class UpdatePackagingGroupResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit UpdatePackagingGroupResponsePrivate(UpdatePackagingGroupResponse * const q);

    void parseUpdatePackagingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePackagingGroupResponse)
    Q_DISABLE_COPY(UpdatePackagingGroupResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
