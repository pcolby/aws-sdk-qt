// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMRULEPOLICYRESPONSE_P_H
#define QTAWS_GETCUSTOMRULEPOLICYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetCustomRulePolicyResponse;

class GetCustomRulePolicyResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetCustomRulePolicyResponsePrivate(GetCustomRulePolicyResponse * const q);

    void parseGetCustomRulePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCustomRulePolicyResponse)
    Q_DISABLE_COPY(GetCustomRulePolicyResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
