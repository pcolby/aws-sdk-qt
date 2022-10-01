// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMODELREQUEST_P_H
#define QTAWS_STARTMODELREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "startmodelrequest.h"

namespace QtAws {
namespace LookoutVision {

class StartModelRequest;

class StartModelRequestPrivate : public LookoutVisionRequestPrivate {

public:
    StartModelRequestPrivate(const LookoutVisionRequest::Action action,
                                   StartModelRequest * const q);
    StartModelRequestPrivate(const StartModelRequestPrivate &other,
                                   StartModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartModelRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
