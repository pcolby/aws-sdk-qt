// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTATEMACHINERESPONSE_P_H
#define QTAWS_DELETESTATEMACHINERESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class DeleteStateMachineResponse;

class DeleteStateMachineResponsePrivate : public SfnResponsePrivate {

public:

    explicit DeleteStateMachineResponsePrivate(DeleteStateMachineResponse * const q);

    void parseDeleteStateMachineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStateMachineResponse)
    Q_DISABLE_COPY(DeleteStateMachineResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
