// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERCONTENTSREQUEST_P_H
#define QTAWS_DESCRIBEFOLDERCONTENTSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describefoldercontentsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeFolderContentsRequest;

class DescribeFolderContentsRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeFolderContentsRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeFolderContentsRequest * const q);
    DescribeFolderContentsRequestPrivate(const DescribeFolderContentsRequestPrivate &other,
                                   DescribeFolderContentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFolderContentsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
