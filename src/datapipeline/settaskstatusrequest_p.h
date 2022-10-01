// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTASKSTATUSREQUEST_P_H
#define QTAWS_SETTASKSTATUSREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "settaskstatusrequest.h"

namespace QtAws {
namespace DataPipeline {

class SetTaskStatusRequest;

class SetTaskStatusRequestPrivate : public DataPipelineRequestPrivate {

public:
    SetTaskStatusRequestPrivate(const DataPipelineRequest::Action action,
                                   SetTaskStatusRequest * const q);
    SetTaskStatusRequestPrivate(const SetTaskStatusRequestPrivate &other,
                                   SetTaskStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetTaskStatusRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
