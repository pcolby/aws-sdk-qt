// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCODEBINDINGSOURCEREQUEST_P_H
#define QTAWS_GETCODEBINDINGSOURCEREQUEST_P_H

#include "schemasrequest_p.h"
#include "getcodebindingsourcerequest.h"

namespace QtAws {
namespace Schemas {

class GetCodeBindingSourceRequest;

class GetCodeBindingSourceRequestPrivate : public SchemasRequestPrivate {

public:
    GetCodeBindingSourceRequestPrivate(const SchemasRequest::Action action,
                                   GetCodeBindingSourceRequest * const q);
    GetCodeBindingSourceRequestPrivate(const GetCodeBindingSourceRequestPrivate &other,
                                   GetCodeBindingSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCodeBindingSourceRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
