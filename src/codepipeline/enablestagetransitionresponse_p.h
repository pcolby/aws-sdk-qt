// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESTAGETRANSITIONRESPONSE_P_H
#define QTAWS_ENABLESTAGETRANSITIONRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class EnableStageTransitionResponse;

class EnableStageTransitionResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit EnableStageTransitionResponsePrivate(EnableStageTransitionResponse * const q);

    void parseEnableStageTransitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableStageTransitionResponse)
    Q_DISABLE_COPY(EnableStageTransitionResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
