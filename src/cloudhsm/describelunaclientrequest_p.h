// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELUNACLIENTREQUEST_P_H
#define QTAWS_DESCRIBELUNACLIENTREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "describelunaclientrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeLunaClientRequest;

class DescribeLunaClientRequestPrivate : public CloudHsmRequestPrivate {

public:
    DescribeLunaClientRequestPrivate(const CloudHsmRequest::Action action,
                                   DescribeLunaClientRequest * const q);
    DescribeLunaClientRequestPrivate(const DescribeLunaClientRequestPrivate &other,
                                   DescribeLunaClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLunaClientRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
