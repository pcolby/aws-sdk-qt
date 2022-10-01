// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTVERSIONREQUEST_P_H
#define QTAWS_UPDATEDOCUMENTVERSIONREQUEST_P_H

#include "workdocsrequest_p.h"
#include "updatedocumentversionrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateDocumentVersionRequest;

class UpdateDocumentVersionRequestPrivate : public WorkDocsRequestPrivate {

public:
    UpdateDocumentVersionRequestPrivate(const WorkDocsRequest::Action action,
                                   UpdateDocumentVersionRequest * const q);
    UpdateDocumentVersionRequestPrivate(const UpdateDocumentVersionRequestPrivate &other,
                                   UpdateDocumentVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentVersionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
