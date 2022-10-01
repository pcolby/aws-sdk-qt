// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIONTYPERESPONSE_P_H
#define QTAWS_GETACTIONTYPERESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class GetActionTypeResponse;

class GetActionTypeResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit GetActionTypeResponsePrivate(GetActionTypeResponse * const q);

    void parseGetActionTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetActionTypeResponse)
    Q_DISABLE_COPY(GetActionTypeResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
