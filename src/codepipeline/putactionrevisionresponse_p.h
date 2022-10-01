// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACTIONREVISIONRESPONSE_P_H
#define QTAWS_PUTACTIONREVISIONRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PutActionRevisionResponse;

class PutActionRevisionResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PutActionRevisionResponsePrivate(PutActionRevisionResponse * const q);

    void parsePutActionRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutActionRevisionResponse)
    Q_DISABLE_COPY(PutActionRevisionResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
