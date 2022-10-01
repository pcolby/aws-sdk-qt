// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEDOCUMENTVERSIONSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describedocumentversionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeDocumentVersionsRequest;

class DescribeDocumentVersionsRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeDocumentVersionsRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeDocumentVersionsRequest * const q);
    DescribeDocumentVersionsRequestPrivate(const DescribeDocumentVersionsRequestPrivate &other,
                                   DescribeDocumentVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentVersionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
