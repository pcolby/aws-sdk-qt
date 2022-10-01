// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKGROUPRESPONSE_P_H
#define QTAWS_CREATEWORKGROUPRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class CreateWorkGroupResponse;

class CreateWorkGroupResponsePrivate : public AthenaResponsePrivate {

public:

    explicit CreateWorkGroupResponsePrivate(CreateWorkGroupResponse * const q);

    void parseCreateWorkGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkGroupResponse)
    Q_DISABLE_COPY(CreateWorkGroupResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
