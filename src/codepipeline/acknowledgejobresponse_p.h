// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGEJOBRESPONSE_P_H
#define QTAWS_ACKNOWLEDGEJOBRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class AcknowledgeJobResponse;

class AcknowledgeJobResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit AcknowledgeJobResponsePrivate(AcknowledgeJobResponse * const q);

    void parseAcknowledgeJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcknowledgeJobResponse)
    Q_DISABLE_COPY(AcknowledgeJobResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
