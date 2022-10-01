// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHUMANLOOPSREQUEST_P_H
#define QTAWS_LISTHUMANLOOPSREQUEST_P_H

#include "sagemakera2iruntimerequest_p.h"
#include "listhumanloopsrequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class ListHumanLoopsRequest;

class ListHumanLoopsRequestPrivate : public SageMakerA2IRuntimeRequestPrivate {

public:
    ListHumanLoopsRequestPrivate(const SageMakerA2IRuntimeRequest::Action action,
                                   ListHumanLoopsRequest * const q);
    ListHumanLoopsRequestPrivate(const ListHumanLoopsRequestPrivate &other,
                                   ListHumanLoopsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHumanLoopsRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
