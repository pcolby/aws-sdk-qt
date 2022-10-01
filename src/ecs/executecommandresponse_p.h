// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECOMMANDRESPONSE_P_H
#define QTAWS_EXECUTECOMMANDRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class ExecuteCommandResponse;

class ExecuteCommandResponsePrivate : public EcsResponsePrivate {

public:

    explicit ExecuteCommandResponsePrivate(ExecuteCommandResponse * const q);

    void parseExecuteCommandResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteCommandResponse)
    Q_DISABLE_COPY(ExecuteCommandResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
