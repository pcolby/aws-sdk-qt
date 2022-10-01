// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHAPGSREQUEST_P_H
#define QTAWS_LISTHAPGSREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "listhapgsrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListHapgsRequest;

class ListHapgsRequestPrivate : public CloudHsmRequestPrivate {

public:
    ListHapgsRequestPrivate(const CloudHsmRequest::Action action,
                                   ListHapgsRequest * const q);
    ListHapgsRequestPrivate(const ListHapgsRequestPrivate &other,
                                   ListHapgsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHapgsRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
