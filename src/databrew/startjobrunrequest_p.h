// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRUNREQUEST_P_H
#define QTAWS_STARTJOBRUNREQUEST_P_H

#include "databrewrequest_p.h"
#include "startjobrunrequest.h"

namespace QtAws {
namespace DataBrew {

class StartJobRunRequest;

class StartJobRunRequestPrivate : public DataBrewRequestPrivate {

public:
    StartJobRunRequestPrivate(const DataBrewRequest::Action action,
                                   StartJobRunRequest * const q);
    StartJobRunRequestPrivate(const StartJobRunRequestPrivate &other,
                                   StartJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartJobRunRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
