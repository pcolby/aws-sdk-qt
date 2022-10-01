// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUNDLEREQUEST_P_H
#define QTAWS_DESCRIBEBUNDLEREQUEST_P_H

#include "mobilerequest_p.h"
#include "describebundlerequest.h"

namespace QtAws {
namespace Mobile {

class DescribeBundleRequest;

class DescribeBundleRequestPrivate : public MobileRequestPrivate {

public:
    DescribeBundleRequestPrivate(const MobileRequest::Action action,
                                   DescribeBundleRequest * const q);
    DescribeBundleRequestPrivate(const DescribeBundleRequestPrivate &other,
                                   DescribeBundleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBundleRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
