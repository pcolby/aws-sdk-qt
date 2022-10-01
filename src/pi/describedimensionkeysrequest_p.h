// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIMENSIONKEYSREQUEST_P_H
#define QTAWS_DESCRIBEDIMENSIONKEYSREQUEST_P_H

#include "pirequest_p.h"
#include "describedimensionkeysrequest.h"

namespace QtAws {
namespace Pi {

class DescribeDimensionKeysRequest;

class DescribeDimensionKeysRequestPrivate : public PiRequestPrivate {

public:
    DescribeDimensionKeysRequestPrivate(const PiRequest::Action action,
                                   DescribeDimensionKeysRequest * const q);
    DescribeDimensionKeysRequestPrivate(const DescribeDimensionKeysRequestPrivate &other,
                                   DescribeDimensionKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDimensionKeysRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
