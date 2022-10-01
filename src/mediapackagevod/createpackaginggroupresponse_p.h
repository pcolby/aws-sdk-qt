// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGINGGROUPRESPONSE_P_H
#define QTAWS_CREATEPACKAGINGGROUPRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class CreatePackagingGroupResponse;

class CreatePackagingGroupResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit CreatePackagingGroupResponsePrivate(CreatePackagingGroupResponse * const q);

    void parseCreatePackagingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePackagingGroupResponse)
    Q_DISABLE_COPY(CreatePackagingGroupResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
