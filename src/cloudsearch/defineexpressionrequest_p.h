// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEEXPRESSIONREQUEST_P_H
#define QTAWS_DEFINEEXPRESSIONREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "defineexpressionrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineExpressionRequest;

class DefineExpressionRequestPrivate : public CloudSearchRequestPrivate {

public:
    DefineExpressionRequestPrivate(const CloudSearchRequest::Action action,
                                   DefineExpressionRequest * const q);
    DefineExpressionRequestPrivate(const DefineExpressionRequestPrivate &other,
                                   DefineExpressionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DefineExpressionRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
