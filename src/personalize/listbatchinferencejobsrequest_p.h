// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHINFERENCEJOBSREQUEST_P_H
#define QTAWS_LISTBATCHINFERENCEJOBSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listbatchinferencejobsrequest.h"

namespace QtAws {
namespace Personalize {

class ListBatchInferenceJobsRequest;

class ListBatchInferenceJobsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListBatchInferenceJobsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListBatchInferenceJobsRequest * const q);
    ListBatchInferenceJobsRequestPrivate(const ListBatchInferenceJobsRequestPrivate &other,
                                   ListBatchInferenceJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBatchInferenceJobsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
