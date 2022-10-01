// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEDOCUMENTVERSIONUPLOADREQUEST_P_H
#define QTAWS_INITIATEDOCUMENTVERSIONUPLOADREQUEST_P_H

#include "workdocsrequest_p.h"
#include "initiatedocumentversionuploadrequest.h"

namespace QtAws {
namespace WorkDocs {

class InitiateDocumentVersionUploadRequest;

class InitiateDocumentVersionUploadRequestPrivate : public WorkDocsRequestPrivate {

public:
    InitiateDocumentVersionUploadRequestPrivate(const WorkDocsRequest::Action action,
                                   InitiateDocumentVersionUploadRequest * const q);
    InitiateDocumentVersionUploadRequestPrivate(const InitiateDocumentVersionUploadRequestPrivate &other,
                                   InitiateDocumentVersionUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitiateDocumentVersionUploadRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
