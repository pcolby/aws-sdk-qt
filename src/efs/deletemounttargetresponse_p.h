// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOUNTTARGETRESPONSE_P_H
#define QTAWS_DELETEMOUNTTARGETRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DeleteMountTargetResponse;

class DeleteMountTargetResponsePrivate : public EfsResponsePrivate {

public:

    explicit DeleteMountTargetResponsePrivate(DeleteMountTargetResponse * const q);

    void parseDeleteMountTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMountTargetResponse)
    Q_DISABLE_COPY(DeleteMountTargetResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
