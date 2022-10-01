// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKGROUPRESPONSE_P_H
#define QTAWS_UPDATEWORKGROUPRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class UpdateWorkGroupResponse;

class UpdateWorkGroupResponsePrivate : public AthenaResponsePrivate {

public:

    explicit UpdateWorkGroupResponsePrivate(UpdateWorkGroupResponse * const q);

    void parseUpdateWorkGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkGroupResponse)
    Q_DISABLE_COPY(UpdateWorkGroupResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
