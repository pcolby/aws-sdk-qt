// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCANDIDATESFORAUTOMLJOBREQUEST_P_H
#define QTAWS_LISTCANDIDATESFORAUTOMLJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listcandidatesforautomljobrequest.h"

namespace QtAws {
namespace SageMaker {

class ListCandidatesForAutoMLJobRequest;

class ListCandidatesForAutoMLJobRequestPrivate : public SageMakerRequestPrivate {

public:
    ListCandidatesForAutoMLJobRequestPrivate(const SageMakerRequest::Action action,
                                   ListCandidatesForAutoMLJobRequest * const q);
    ListCandidatesForAutoMLJobRequestPrivate(const ListCandidatesForAutoMLJobRequestPrivate &other,
                                   ListCandidatesForAutoMLJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCandidatesForAutoMLJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
