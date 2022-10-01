// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBYTEMATCHSETREQUEST_P_H
#define QTAWS_CREATEBYTEMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "createbytematchsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateByteMatchSetRequest;

class CreateByteMatchSetRequestPrivate : public WafRequestPrivate {

public:
    CreateByteMatchSetRequestPrivate(const WafRequest::Action action,
                                   CreateByteMatchSetRequest * const q);
    CreateByteMatchSetRequestPrivate(const CreateByteMatchSetRequestPrivate &other,
                                   CreateByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateByteMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
