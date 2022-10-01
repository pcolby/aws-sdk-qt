// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTIONGROUPRESPONSE_P_H
#define QTAWS_DELETEOPTIONGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteOptionGroupResponse;

class DeleteOptionGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteOptionGroupResponsePrivate(DeleteOptionGroupResponse * const q);

    void parseDeleteOptionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOptionGroupResponse)
    Q_DISABLE_COPY(DeleteOptionGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
