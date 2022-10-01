// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTDOCUMENTVERSIONUPLOADREQUEST_P_H
#define QTAWS_ABORTDOCUMENTVERSIONUPLOADREQUEST_P_H

#include "workdocsrequest_p.h"
#include "abortdocumentversionuploadrequest.h"

namespace QtAws {
namespace WorkDocs {

class AbortDocumentVersionUploadRequest;

class AbortDocumentVersionUploadRequestPrivate : public WorkDocsRequestPrivate {

public:
    AbortDocumentVersionUploadRequestPrivate(const WorkDocsRequest::Action action,
                                   AbortDocumentVersionUploadRequest * const q);
    AbortDocumentVersionUploadRequestPrivate(const AbortDocumentVersionUploadRequestPrivate &other,
                                   AbortDocumentVersionUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(AbortDocumentVersionUploadRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
