// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTREQUEST_P_H
#define QTAWS_GETDOCUMENTREQUEST_P_H

#include "workdocsrequest_p.h"
#include "getdocumentrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentRequest;

class GetDocumentRequestPrivate : public WorkDocsRequestPrivate {

public:
    GetDocumentRequestPrivate(const WorkDocsRequest::Action action,
                                   GetDocumentRequest * const q);
    GetDocumentRequestPrivate(const GetDocumentRequestPrivate &other,
                                   GetDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
