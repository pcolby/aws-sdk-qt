// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTSYNTAXREQUEST_P_H
#define QTAWS_BATCHDETECTSYNTAXREQUEST_P_H

#include "comprehendrequest_p.h"
#include "batchdetectsyntaxrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectSyntaxRequest;

class BatchDetectSyntaxRequestPrivate : public ComprehendRequestPrivate {

public:
    BatchDetectSyntaxRequestPrivate(const ComprehendRequest::Action action,
                                   BatchDetectSyntaxRequest * const q);
    BatchDetectSyntaxRequestPrivate(const BatchDetectSyntaxRequestPrivate &other,
                                   BatchDetectSyntaxRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDetectSyntaxRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
