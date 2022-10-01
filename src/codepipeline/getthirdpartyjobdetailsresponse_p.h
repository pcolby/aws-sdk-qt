// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHIRDPARTYJOBDETAILSRESPONSE_P_H
#define QTAWS_GETTHIRDPARTYJOBDETAILSRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class GetThirdPartyJobDetailsResponse;

class GetThirdPartyJobDetailsResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit GetThirdPartyJobDetailsResponsePrivate(GetThirdPartyJobDetailsResponse * const q);

    void parseGetThirdPartyJobDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetThirdPartyJobDetailsResponse)
    Q_DISABLE_COPY(GetThirdPartyJobDetailsResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
