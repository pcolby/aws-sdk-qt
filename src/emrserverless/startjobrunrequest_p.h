// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRUNREQUEST_P_H
#define QTAWS_STARTJOBRUNREQUEST_P_H

#include "emrserverlessrequest_p.h"
#include "startjobrunrequest.h"

namespace QtAws {
namespace EmrServerless {

class StartJobRunRequest;

class StartJobRunRequestPrivate : public EmrServerlessRequestPrivate {

public:
    StartJobRunRequestPrivate(const EmrServerlessRequest::Action action,
                                   StartJobRunRequest * const q);
    StartJobRunRequestPrivate(const StartJobRunRequestPrivate &other,
                                   StartJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartJobRunRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
