// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTVERSIONREQUEST_P_H
#define QTAWS_GETDOCUMENTVERSIONREQUEST_P_H

#include "workdocsrequest_p.h"
#include "getdocumentversionrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentVersionRequest;

class GetDocumentVersionRequestPrivate : public WorkDocsRequestPrivate {

public:
    GetDocumentVersionRequestPrivate(const WorkDocsRequest::Action action,
                                   GetDocumentVersionRequest * const q);
    GetDocumentVersionRequestPrivate(const GetDocumentVersionRequestPrivate &other,
                                   GetDocumentVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentVersionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
