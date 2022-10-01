// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIALSREQUEST_P_H
#define QTAWS_LISTTRIALSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listtrialsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrialsRequest;

class ListTrialsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListTrialsRequestPrivate(const SageMakerRequest::Action action,
                                   ListTrialsRequest * const q);
    ListTrialsRequestPrivate(const ListTrialsRequestPrivate &other,
                                   ListTrialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrialsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
