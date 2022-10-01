// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETSREQUEST_P_H
#define QTAWS_DESCRIBEFLEETSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describefleetsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeFleetsRequest;

class DescribeFleetsRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeFleetsRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeFleetsRequest * const q);
    DescribeFleetsRequestPrivate(const DescribeFleetsRequestPrivate &other,
                                   DescribeFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
