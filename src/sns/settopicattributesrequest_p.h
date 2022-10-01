// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTOPICATTRIBUTESREQUEST_P_H
#define QTAWS_SETTOPICATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "settopicattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetTopicAttributesRequest;

class SetTopicAttributesRequestPrivate : public SnsRequestPrivate {

public:
    SetTopicAttributesRequestPrivate(const SnsRequest::Action action,
                                   SetTopicAttributesRequest * const q);
    SetTopicAttributesRequestPrivate(const SetTopicAttributesRequestPrivate &other,
                                   SetTopicAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetTopicAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
