// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTREQUEST_P_H
#define QTAWS_DELETEEXPERIMENTREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "deleteexperimentrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteExperimentRequest;

class DeleteExperimentRequestPrivate : public EvidentlyRequestPrivate {

public:
    DeleteExperimentRequestPrivate(const EvidentlyRequest::Action action,
                                   DeleteExperimentRequest * const q);
    DeleteExperimentRequestPrivate(const DeleteExperimentRequestPrivate &other,
                                   DeleteExperimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
