// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONTYPERESPONSE_P_H
#define QTAWS_UPDATEACTIONTYPERESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class UpdateActionTypeResponse;

class UpdateActionTypeResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit UpdateActionTypeResponsePrivate(UpdateActionTypeResponse * const q);

    void parseUpdateActionTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateActionTypeResponse)
    Q_DISABLE_COPY(UpdateActionTypeResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
