// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEXPERIMENTREQUEST_P_H
#define QTAWS_STOPEXPERIMENTREQUEST_P_H

#include "fisrequest_p.h"
#include "stopexperimentrequest.h"

namespace QtAws {
namespace Fis {

class StopExperimentRequest;

class StopExperimentRequestPrivate : public FisRequestPrivate {

public:
    StopExperimentRequestPrivate(const FisRequest::Action action,
                                   StopExperimentRequest * const q);
    StopExperimentRequestPrivate(const StopExperimentRequestPrivate &other,
                                   StopExperimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopExperimentRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
