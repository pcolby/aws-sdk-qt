// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILESDKRELEASERESPONSE_P_H
#define QTAWS_GETMOBILESDKRELEASERESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetMobileSdkReleaseResponse;

class GetMobileSdkReleaseResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetMobileSdkReleaseResponsePrivate(GetMobileSdkReleaseResponse * const q);

    void parseGetMobileSdkReleaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMobileSdkReleaseResponse)
    Q_DISABLE_COPY(GetMobileSdkReleaseResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
