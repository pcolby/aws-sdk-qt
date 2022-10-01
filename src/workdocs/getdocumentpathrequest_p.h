// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTPATHREQUEST_P_H
#define QTAWS_GETDOCUMENTPATHREQUEST_P_H

#include "workdocsrequest_p.h"
#include "getdocumentpathrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentPathRequest;

class GetDocumentPathRequestPrivate : public WorkDocsRequestPrivate {

public:
    GetDocumentPathRequestPrivate(const WorkDocsRequest::Action action,
                                   GetDocumentPathRequest * const q);
    GetDocumentPathRequestPrivate(const GetDocumentPathRequestPrivate &other,
                                   GetDocumentPathRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentPathRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
