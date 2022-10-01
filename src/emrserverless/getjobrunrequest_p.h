// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRUNREQUEST_P_H
#define QTAWS_GETJOBRUNREQUEST_P_H

#include "emrserverlessrequest_p.h"
#include "getjobrunrequest.h"

namespace QtAws {
namespace EmrServerless {

class GetJobRunRequest;

class GetJobRunRequestPrivate : public EmrServerlessRequestPrivate {

public:
    GetJobRunRequestPrivate(const EmrServerlessRequest::Action action,
                                   GetJobRunRequest * const q);
    GetJobRunRequestPrivate(const GetJobRunRequestPrivate &other,
                                   GetJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobRunRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
