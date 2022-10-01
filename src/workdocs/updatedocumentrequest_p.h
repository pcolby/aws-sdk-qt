// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTREQUEST_P_H
#define QTAWS_UPDATEDOCUMENTREQUEST_P_H

#include "workdocsrequest_p.h"
#include "updatedocumentrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateDocumentRequest;

class UpdateDocumentRequestPrivate : public WorkDocsRequestPrivate {

public:
    UpdateDocumentRequestPrivate(const WorkDocsRequest::Action action,
                                   UpdateDocumentRequest * const q);
    UpdateDocumentRequestPrivate(const UpdateDocumentRequestPrivate &other,
                                   UpdateDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
