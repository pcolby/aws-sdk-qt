// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESTAGETRANSITIONRESPONSE_P_H
#define QTAWS_DISABLESTAGETRANSITIONRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class DisableStageTransitionResponse;

class DisableStageTransitionResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit DisableStageTransitionResponsePrivate(DisableStageTransitionResponse * const q);

    void parseDisableStageTransitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableStageTransitionResponse)
    Q_DISABLE_COPY(DisableStageTransitionResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
