// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTPATHREQUEST_H
#define QTAWS_GETDOCUMENTPATHREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentPathRequestPrivate;

class QTAWSWORKDOCS_EXPORT GetDocumentPathRequest : public WorkDocsRequest {

public:
    GetDocumentPathRequest(const GetDocumentPathRequest &other);
    GetDocumentPathRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentPathRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
