// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROGRAMREQUEST_P_H
#define QTAWS_DESCRIBEPROGRAMREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "describeprogramrequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeProgramRequest;

class DescribeProgramRequestPrivate : public MediaTailorRequestPrivate {

public:
    DescribeProgramRequestPrivate(const MediaTailorRequest::Action action,
                                   DescribeProgramRequest * const q);
    DescribeProgramRequestPrivate(const DescribeProgramRequestPrivate &other,
                                   DescribeProgramRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProgramRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
