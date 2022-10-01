// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUNDLESREQUEST_P_H
#define QTAWS_GETBUNDLESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getbundlesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBundlesRequest;

class GetBundlesRequestPrivate : public LightsailRequestPrivate {

public:
    GetBundlesRequestPrivate(const LightsailRequest::Action action,
                                   GetBundlesRequest * const q);
    GetBundlesRequestPrivate(const GetBundlesRequestPrivate &other,
                                   GetBundlesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBundlesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
