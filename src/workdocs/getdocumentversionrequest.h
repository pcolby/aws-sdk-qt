// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTVERSIONREQUEST_H
#define QTAWS_GETDOCUMENTVERSIONREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentVersionRequestPrivate;

class QTAWSWORKDOCS_EXPORT GetDocumentVersionRequest : public WorkDocsRequest {

public:
    GetDocumentVersionRequest(const GetDocumentVersionRequest &other);
    GetDocumentVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentVersionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
