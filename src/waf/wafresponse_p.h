// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFRESPONSE_P_H
#define QTAWS_WAFRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Waf {

class WafResponse;

class WafResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WafResponsePrivate(WafResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WafResponse)
    Q_DISABLE_COPY(WafResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
