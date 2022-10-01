// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECANARYREQUEST_P_H
#define QTAWS_UPDATECANARYREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "updatecanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class UpdateCanaryRequest;

class UpdateCanaryRequestPrivate : public SyntheticsRequestPrivate {

public:
    UpdateCanaryRequestPrivate(const SyntheticsRequest::Action action,
                                   UpdateCanaryRequest * const q);
    UpdateCanaryRequestPrivate(const UpdateCanaryRequestPrivate &other,
                                   UpdateCanaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
