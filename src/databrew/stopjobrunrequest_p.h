// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPJOBRUNREQUEST_P_H
#define QTAWS_STOPJOBRUNREQUEST_P_H

#include "databrewrequest_p.h"
#include "stopjobrunrequest.h"

namespace QtAws {
namespace DataBrew {

class StopJobRunRequest;

class StopJobRunRequestPrivate : public DataBrewRequestPrivate {

public:
    StopJobRunRequestPrivate(const DataBrewRequest::Action action,
                                   StopJobRunRequest * const q);
    StopJobRunRequestPrivate(const StopJobRunRequestPrivate &other,
                                   StopJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopJobRunRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
