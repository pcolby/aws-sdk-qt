// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSMSATTRIBUTESREQUEST_P_H
#define QTAWS_SETSMSATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "setsmsattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetSMSAttributesRequest;

class SetSMSAttributesRequestPrivate : public SnsRequestPrivate {

public:
    SetSMSAttributesRequestPrivate(const SnsRequest::Action action,
                                   SetSMSAttributesRequest * const q);
    SetSMSAttributesRequestPrivate(const SetSMSAttributesRequestPrivate &other,
                                   SetSMSAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetSMSAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
