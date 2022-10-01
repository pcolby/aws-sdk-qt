// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSATTRIBUTESREQUEST_P_H
#define QTAWS_GETSMSATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "getsmsattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetSMSAttributesRequest;

class GetSMSAttributesRequestPrivate : public SnsRequestPrivate {

public:
    GetSMSAttributesRequestPrivate(const SnsRequest::Action action,
                                   GetSMSAttributesRequest * const q);
    GetSMSAttributesRequestPrivate(const GetSMSAttributesRequestPrivate &other,
                                   GetSMSAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSMSAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
