// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIVESOURCEREQUEST_P_H
#define QTAWS_DESCRIBELIVESOURCEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "describelivesourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeLiveSourceRequest;

class DescribeLiveSourceRequestPrivate : public MediaTailorRequestPrivate {

public:
    DescribeLiveSourceRequestPrivate(const MediaTailorRequest::Action action,
                                   DescribeLiveSourceRequest * const q);
    DescribeLiveSourceRequestPrivate(const DescribeLiveSourceRequestPrivate &other,
                                   DescribeLiveSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLiveSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
