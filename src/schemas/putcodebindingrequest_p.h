// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCODEBINDINGREQUEST_P_H
#define QTAWS_PUTCODEBINDINGREQUEST_P_H

#include "schemasrequest_p.h"
#include "putcodebindingrequest.h"

namespace QtAws {
namespace Schemas {

class PutCodeBindingRequest;

class PutCodeBindingRequestPrivate : public SchemasRequestPrivate {

public:
    PutCodeBindingRequestPrivate(const SchemasRequest::Action action,
                                   PutCodeBindingRequest * const q);
    PutCodeBindingRequestPrivate(const PutCodeBindingRequestPrivate &other,
                                   PutCodeBindingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutCodeBindingRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
