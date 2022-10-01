// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKGROUPRESPONSE_P_H
#define QTAWS_DELETEWORKGROUPRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class DeleteWorkGroupResponse;

class DeleteWorkGroupResponsePrivate : public AthenaResponsePrivate {

public:

    explicit DeleteWorkGroupResponsePrivate(DeleteWorkGroupResponse * const q);

    void parseDeleteWorkGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkGroupResponse)
    Q_DISABLE_COPY(DeleteWorkGroupResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
