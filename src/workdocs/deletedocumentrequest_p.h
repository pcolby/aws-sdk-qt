// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTREQUEST_P_H
#define QTAWS_DELETEDOCUMENTREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletedocumentrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteDocumentRequest;

class DeleteDocumentRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteDocumentRequestPrivate(const WorkDocsRequest::Action action,
                                   DeleteDocumentRequest * const q);
    DeleteDocumentRequestPrivate(const DeleteDocumentRequestPrivate &other,
                                   DeleteDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDocumentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
