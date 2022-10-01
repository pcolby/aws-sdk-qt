// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMITIGATIONACTIONREQUEST_P_H
#define QTAWS_DESCRIBEMITIGATIONACTIONREQUEST_P_H

#include "iotrequest_p.h"
#include "describemitigationactionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeMitigationActionRequest;

class DescribeMitigationActionRequestPrivate : public IoTRequestPrivate {

public:
    DescribeMitigationActionRequestPrivate(const IoTRequest::Action action,
                                   DescribeMitigationActionRequest * const q);
    DescribeMitigationActionRequestPrivate(const DescribeMitigationActionRequestPrivate &other,
                                   DescribeMitigationActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMitigationActionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
