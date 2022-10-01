// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTATEMACHINERESPONSE_P_H
#define QTAWS_UPDATESTATEMACHINERESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class UpdateStateMachineResponse;

class UpdateStateMachineResponsePrivate : public SfnResponsePrivate {

public:

    explicit UpdateStateMachineResponsePrivate(UpdateStateMachineResponse * const q);

    void parseUpdateStateMachineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStateMachineResponse)
    Q_DISABLE_COPY(UpdateStateMachineResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
