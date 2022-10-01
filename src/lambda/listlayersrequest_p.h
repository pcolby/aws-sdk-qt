// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAYERSREQUEST_P_H
#define QTAWS_LISTLAYERSREQUEST_P_H

#include "lambdarequest_p.h"
#include "listlayersrequest.h"

namespace QtAws {
namespace Lambda {

class ListLayersRequest;

class ListLayersRequestPrivate : public LambdaRequestPrivate {

public:
    ListLayersRequestPrivate(const LambdaRequest::Action action,
                                   ListLayersRequest * const q);
    ListLayersRequestPrivate(const ListLayersRequestPrivate &other,
                                   ListLayersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLayersRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
