// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPERIMENTREQUEST_P_H
#define QTAWS_STARTEXPERIMENTREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "startexperimentrequest.h"

namespace QtAws {
namespace Evidently {

class StartExperimentRequest;

class StartExperimentRequestPrivate : public EvidentlyRequestPrivate {

public:
    StartExperimentRequestPrivate(const EvidentlyRequest::Action action,
                                   StartExperimentRequest * const q);
    StartExperimentRequestPrivate(const StartExperimentRequestPrivate &other,
                                   StartExperimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
