// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBYTEMATCHSETREQUEST_P_H
#define QTAWS_GETBYTEMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "getbytematchsetrequest.h"

namespace QtAws {
namespace Waf {

class GetByteMatchSetRequest;

class GetByteMatchSetRequestPrivate : public WafRequestPrivate {

public:
    GetByteMatchSetRequestPrivate(const WafRequest::Action action,
                                   GetByteMatchSetRequest * const q);
    GetByteMatchSetRequestPrivate(const GetByteMatchSetRequestPrivate &other,
                                   GetByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetByteMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
