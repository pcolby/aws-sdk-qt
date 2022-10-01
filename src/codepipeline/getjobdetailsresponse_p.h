// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBDETAILSRESPONSE_P_H
#define QTAWS_GETJOBDETAILSRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class GetJobDetailsResponse;

class GetJobDetailsResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit GetJobDetailsResponsePrivate(GetJobDetailsResponse * const q);

    void parseGetJobDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobDetailsResponse)
    Q_DISABLE_COPY(GetJobDetailsResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
