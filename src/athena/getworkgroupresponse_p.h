// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKGROUPRESPONSE_P_H
#define QTAWS_GETWORKGROUPRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class GetWorkGroupResponse;

class GetWorkGroupResponsePrivate : public AthenaResponsePrivate {

public:

    explicit GetWorkGroupResponsePrivate(GetWorkGroupResponse * const q);

    void parseGetWorkGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkGroupResponse)
    Q_DISABLE_COPY(GetWorkGroupResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
