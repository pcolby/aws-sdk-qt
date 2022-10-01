// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCONVERSIONTASKREQUEST_P_H
#define QTAWS_CANCELCONVERSIONTASKREQUEST_P_H

#include "ec2request_p.h"
#include "cancelconversiontaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelConversionTaskRequest;

class CancelConversionTaskRequestPrivate : public Ec2RequestPrivate {

public:
    CancelConversionTaskRequestPrivate(const Ec2Request::Action action,
                                   CancelConversionTaskRequest * const q);
    CancelConversionTaskRequestPrivate(const CancelConversionTaskRequestPrivate &other,
                                   CancelConversionTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelConversionTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
