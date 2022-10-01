// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECANARYREQUEST_P_H
#define QTAWS_DELETECANARYREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "deletecanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class DeleteCanaryRequest;

class DeleteCanaryRequestPrivate : public SyntheticsRequestPrivate {

public:
    DeleteCanaryRequestPrivate(const SyntheticsRequest::Action action,
                                   DeleteCanaryRequest * const q);
    DeleteCanaryRequestPrivate(const DeleteCanaryRequestPrivate &other,
                                   DeleteCanaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
