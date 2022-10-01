// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGETHIRDPARTYJOBRESPONSE_P_H
#define QTAWS_ACKNOWLEDGETHIRDPARTYJOBRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class AcknowledgeThirdPartyJobResponse;

class AcknowledgeThirdPartyJobResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit AcknowledgeThirdPartyJobResponsePrivate(AcknowledgeThirdPartyJobResponse * const q);

    void parseAcknowledgeThirdPartyJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcknowledgeThirdPartyJobResponse)
    Q_DISABLE_COPY(AcknowledgeThirdPartyJobResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
