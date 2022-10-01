// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTATEMACHINERESPONSE_P_H
#define QTAWS_CREATESTATEMACHINERESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class CreateStateMachineResponse;

class CreateStateMachineResponsePrivate : public SfnResponsePrivate {

public:

    explicit CreateStateMachineResponsePrivate(CreateStateMachineResponse * const q);

    void parseCreateStateMachineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStateMachineResponse)
    Q_DISABLE_COPY(CreateStateMachineResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
