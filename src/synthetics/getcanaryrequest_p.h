// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCANARYREQUEST_P_H
#define QTAWS_GETCANARYREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "getcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class GetCanaryRequest;

class GetCanaryRequestPrivate : public SyntheticsRequestPrivate {

public:
    GetCanaryRequestPrivate(const SyntheticsRequest::Action action,
                                   GetCanaryRequest * const q);
    GetCanaryRequestPrivate(const GetCanaryRequestPrivate &other,
                                   GetCanaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
