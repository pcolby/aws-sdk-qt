// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INDEXDOCUMENTSREQUEST_P_H
#define QTAWS_INDEXDOCUMENTSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "indexdocumentsrequest.h"

namespace QtAws {
namespace CloudSearch {

class IndexDocumentsRequest;

class IndexDocumentsRequestPrivate : public CloudSearchRequestPrivate {

public:
    IndexDocumentsRequestPrivate(const CloudSearchRequest::Action action,
                                   IndexDocumentsRequest * const q);
    IndexDocumentsRequestPrivate(const IndexDocumentsRequestPrivate &other,
                                   IndexDocumentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(IndexDocumentsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
