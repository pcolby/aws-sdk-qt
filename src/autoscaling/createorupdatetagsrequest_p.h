// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORUPDATETAGSREQUEST_P_H
#define QTAWS_CREATEORUPDATETAGSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "createorupdatetagsrequest.h"

namespace QtAws {
namespace AutoScaling {

class CreateOrUpdateTagsRequest;

class CreateOrUpdateTagsRequestPrivate : public AutoScalingRequestPrivate {

public:
    CreateOrUpdateTagsRequestPrivate(const AutoScalingRequest::Action action,
                                   CreateOrUpdateTagsRequest * const q);
    CreateOrUpdateTagsRequestPrivate(const CreateOrUpdateTagsRequestPrivate &other,
                                   CreateOrUpdateTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOrUpdateTagsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
