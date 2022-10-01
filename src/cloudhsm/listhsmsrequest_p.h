// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHSMSREQUEST_P_H
#define QTAWS_LISTHSMSREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "listhsmsrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListHsmsRequest;

class ListHsmsRequestPrivate : public CloudHsmRequestPrivate {

public:
    ListHsmsRequestPrivate(const CloudHsmRequest::Action action,
                                   ListHsmsRequest * const q);
    ListHsmsRequestPrivate(const ListHsmsRequestPrivate &other,
                                   ListHsmsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHsmsRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
