// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBRUNREQUEST_P_H
#define QTAWS_CANCELJOBRUNREQUEST_P_H

#include "emrserverlessrequest_p.h"
#include "canceljobrunrequest.h"

namespace QtAws {
namespace EmrServerless {

class CancelJobRunRequest;

class CancelJobRunRequestPrivate : public EmrServerlessRequestPrivate {

public:
    CancelJobRunRequestPrivate(const EmrServerlessRequest::Action action,
                                   CancelJobRunRequest * const q);
    CancelJobRunRequestPrivate(const CancelJobRunRequestPrivate &other,
                                   CancelJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelJobRunRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
