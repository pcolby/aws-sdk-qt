// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEMOBILESDKRELEASEURLREQUEST_P_H
#define QTAWS_GENERATEMOBILESDKRELEASEURLREQUEST_P_H

#include "wafv2request_p.h"
#include "generatemobilesdkreleaseurlrequest.h"

namespace QtAws {
namespace Wafv2 {

class GenerateMobileSdkReleaseUrlRequest;

class GenerateMobileSdkReleaseUrlRequestPrivate : public Wafv2RequestPrivate {

public:
    GenerateMobileSdkReleaseUrlRequestPrivate(const Wafv2Request::Action action,
                                   GenerateMobileSdkReleaseUrlRequest * const q);
    GenerateMobileSdkReleaseUrlRequestPrivate(const GenerateMobileSdkReleaseUrlRequestPrivate &other,
                                   GenerateMobileSdkReleaseUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateMobileSdkReleaseUrlRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
