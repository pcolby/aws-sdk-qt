// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSTATUSREQUEST_P_H
#define QTAWS_SETSTATUSREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "setstatusrequest.h"

namespace QtAws {
namespace DataPipeline {

class SetStatusRequest;

class SetStatusRequestPrivate : public DataPipelineRequestPrivate {

public:
    SetStatusRequestPrivate(const DataPipelineRequest::Action action,
                                   SetStatusRequest * const q);
    SetStatusRequestPrivate(const SetStatusRequestPrivate &other,
                                   SetStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetStatusRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
