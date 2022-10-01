// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIMENTREQUEST_P_H
#define QTAWS_UPDATEEXPERIMENTREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "updateexperimentrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateExperimentRequest;

class UpdateExperimentRequestPrivate : public EvidentlyRequestPrivate {

public:
    UpdateExperimentRequestPrivate(const EvidentlyRequest::Action action,
                                   UpdateExperimentRequest * const q);
    UpdateExperimentRequestPrivate(const UpdateExperimentRequestPrivate &other,
                                   UpdateExperimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
