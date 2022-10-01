// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECANARYREQUEST_P_H
#define QTAWS_CREATECANARYREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "createcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class CreateCanaryRequest;

class CreateCanaryRequestPrivate : public SyntheticsRequestPrivate {

public:
    CreateCanaryRequestPrivate(const SyntheticsRequest::Action action,
                                   CreateCanaryRequest * const q);
    CreateCanaryRequestPrivate(const CreateCanaryRequestPrivate &other,
                                   CreateCanaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
