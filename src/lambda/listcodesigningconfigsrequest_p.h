// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODESIGNINGCONFIGSREQUEST_P_H
#define QTAWS_LISTCODESIGNINGCONFIGSREQUEST_P_H

#include "lambdarequest_p.h"
#include "listcodesigningconfigsrequest.h"

namespace QtAws {
namespace Lambda {

class ListCodeSigningConfigsRequest;

class ListCodeSigningConfigsRequestPrivate : public LambdaRequestPrivate {

public:
    ListCodeSigningConfigsRequestPrivate(const LambdaRequest::Action action,
                                   ListCodeSigningConfigsRequest * const q);
    ListCodeSigningConfigsRequestPrivate(const ListCodeSigningConfigsRequestPrivate &other,
                                   ListCodeSigningConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCodeSigningConfigsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
