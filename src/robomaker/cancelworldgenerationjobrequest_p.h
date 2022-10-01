// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELWORLDGENERATIONJOBREQUEST_P_H
#define QTAWS_CANCELWORLDGENERATIONJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "cancelworldgenerationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelWorldGenerationJobRequest;

class CancelWorldGenerationJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    CancelWorldGenerationJobRequestPrivate(const RoboMakerRequest::Action action,
                                   CancelWorldGenerationJobRequest * const q);
    CancelWorldGenerationJobRequestPrivate(const CancelWorldGenerationJobRequestPrivate &other,
                                   CancelWorldGenerationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelWorldGenerationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
