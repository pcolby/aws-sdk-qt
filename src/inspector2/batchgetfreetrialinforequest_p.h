// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETFREETRIALINFOREQUEST_P_H
#define QTAWS_BATCHGETFREETRIALINFOREQUEST_P_H

#include "inspector2request_p.h"
#include "batchgetfreetrialinforequest.h"

namespace QtAws {
namespace Inspector2 {

class BatchGetFreeTrialInfoRequest;

class BatchGetFreeTrialInfoRequestPrivate : public Inspector2RequestPrivate {

public:
    BatchGetFreeTrialInfoRequestPrivate(const Inspector2Request::Action action,
                                   BatchGetFreeTrialInfoRequest * const q);
    BatchGetFreeTrialInfoRequestPrivate(const BatchGetFreeTrialInfoRequestPrivate &other,
                                   BatchGetFreeTrialInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetFreeTrialInfoRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
