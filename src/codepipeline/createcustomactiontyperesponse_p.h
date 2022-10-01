// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMACTIONTYPERESPONSE_P_H
#define QTAWS_CREATECUSTOMACTIONTYPERESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class CreateCustomActionTypeResponse;

class CreateCustomActionTypeResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit CreateCustomActionTypeResponsePrivate(CreateCustomActionTypeResponse * const q);

    void parseCreateCustomActionTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomActionTypeResponse)
    Q_DISABLE_COPY(CreateCustomActionTypeResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
