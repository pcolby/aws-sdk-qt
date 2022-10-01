// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFICATIONJOBSREQUEST_P_H
#define QTAWS_LISTDOCUMENTCLASSIFICATIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listdocumentclassificationjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassificationJobsRequest;

class ListDocumentClassificationJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListDocumentClassificationJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListDocumentClassificationJobsRequest * const q);
    ListDocumentClassificationJobsRequestPrivate(const ListDocumentClassificationJobsRequestPrivate &other,
                                   ListDocumentClassificationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDocumentClassificationJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
