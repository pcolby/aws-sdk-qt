// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFV2RESPONSE_P_H
#define QTAWS_WAFV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Wafv2 {

class Wafv2Response;

class Wafv2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Wafv2ResponsePrivate(Wafv2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Wafv2Response)
    Q_DISABLE_COPY(Wafv2ResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
