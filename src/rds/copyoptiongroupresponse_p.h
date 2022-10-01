// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYOPTIONGROUPRESPONSE_P_H
#define QTAWS_COPYOPTIONGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CopyOptionGroupResponse;

class CopyOptionGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit CopyOptionGroupResponsePrivate(CopyOptionGroupResponse * const q);

    void parseCopyOptionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyOptionGroupResponse)
    Q_DISABLE_COPY(CopyOptionGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
