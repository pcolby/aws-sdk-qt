// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPRESSIONREQUEST_P_H
#define QTAWS_DELETEEXPRESSIONREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "deleteexpressionrequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteExpressionRequest;

class DeleteExpressionRequestPrivate : public CloudSearchRequestPrivate {

public:
    DeleteExpressionRequestPrivate(const CloudSearchRequest::Action action,
                                   DeleteExpressionRequest * const q);
    DeleteExpressionRequestPrivate(const DeleteExpressionRequestPrivate &other,
                                   DeleteExpressionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExpressionRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
