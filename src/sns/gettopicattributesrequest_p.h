// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICATTRIBUTESREQUEST_P_H
#define QTAWS_GETTOPICATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "gettopicattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetTopicAttributesRequest;

class GetTopicAttributesRequestPrivate : public SnsRequestPrivate {

public:
    GetTopicAttributesRequestPrivate(const SnsRequest::Action action,
                                   GetTopicAttributesRequest * const q);
    GetTopicAttributesRequestPrivate(const GetTopicAttributesRequestPrivate &other,
                                   GetTopicAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTopicAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
