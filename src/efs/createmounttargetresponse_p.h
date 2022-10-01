// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMOUNTTARGETRESPONSE_P_H
#define QTAWS_CREATEMOUNTTARGETRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class CreateMountTargetResponse;

class CreateMountTargetResponsePrivate : public EfsResponsePrivate {

public:

    explicit CreateMountTargetResponsePrivate(CreateMountTargetResponse * const q);

    void parseCreateMountTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMountTargetResponse)
    Q_DISABLE_COPY(CreateMountTargetResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
