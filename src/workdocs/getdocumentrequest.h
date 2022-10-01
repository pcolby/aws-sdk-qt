// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTREQUEST_H
#define QTAWS_GETDOCUMENTREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentRequestPrivate;

class QTAWSWORKDOCS_EXPORT GetDocumentRequest : public WorkDocsRequest {

public:
    GetDocumentRequest(const GetDocumentRequest &other);
    GetDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
