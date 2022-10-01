// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMODELREQUEST_P_H
#define QTAWS_STOPMODELREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "stopmodelrequest.h"

namespace QtAws {
namespace LookoutVision {

class StopModelRequest;

class StopModelRequestPrivate : public LookoutVisionRequestPrivate {

public:
    StopModelRequestPrivate(const LookoutVisionRequest::Action action,
                                   StopModelRequest * const q);
    StopModelRequestPrivate(const StopModelRequestPrivate &other,
                                   StopModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopModelRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
