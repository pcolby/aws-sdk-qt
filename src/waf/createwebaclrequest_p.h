// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLREQUEST_P_H
#define QTAWS_CREATEWEBACLREQUEST_P_H

#include "wafrequest_p.h"
#include "createwebaclrequest.h"

namespace QtAws {
namespace Waf {

class CreateWebACLRequest;

class CreateWebACLRequestPrivate : public WafRequestPrivate {

public:
    CreateWebACLRequestPrivate(const WafRequest::Action action,
                                   CreateWebACLRequest * const q);
    CreateWebACLRequestPrivate(const CreateWebACLRequestPrivate &other,
                                   CreateWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWebACLRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
