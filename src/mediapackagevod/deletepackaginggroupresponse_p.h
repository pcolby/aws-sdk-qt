// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGINGGROUPRESPONSE_P_H
#define QTAWS_DELETEPACKAGINGGROUPRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class DeletePackagingGroupResponse;

class DeletePackagingGroupResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit DeletePackagingGroupResponsePrivate(DeletePackagingGroupResponse * const q);

    void parseDeletePackagingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePackagingGroupResponse)
    Q_DISABLE_COPY(DeletePackagingGroupResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
