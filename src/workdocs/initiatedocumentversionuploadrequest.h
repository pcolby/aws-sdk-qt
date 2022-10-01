// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEDOCUMENTVERSIONUPLOADREQUEST_H
#define QTAWS_INITIATEDOCUMENTVERSIONUPLOADREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class InitiateDocumentVersionUploadRequestPrivate;

class QTAWSWORKDOCS_EXPORT InitiateDocumentVersionUploadRequest : public WorkDocsRequest {

public:
    InitiateDocumentVersionUploadRequest(const InitiateDocumentVersionUploadRequest &other);
    InitiateDocumentVersionUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateDocumentVersionUploadRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
