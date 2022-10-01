// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTDOCUMENTVERSIONUPLOADREQUEST_H
#define QTAWS_ABORTDOCUMENTVERSIONUPLOADREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class AbortDocumentVersionUploadRequestPrivate;

class QTAWSWORKDOCS_EXPORT AbortDocumentVersionUploadRequest : public WorkDocsRequest {

public:
    AbortDocumentVersionUploadRequest(const AbortDocumentVersionUploadRequest &other);
    AbortDocumentVersionUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AbortDocumentVersionUploadRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
