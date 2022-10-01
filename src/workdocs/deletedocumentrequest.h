// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTREQUEST_H
#define QTAWS_DELETEDOCUMENTREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteDocumentRequestPrivate;

class QTAWSWORKDOCS_EXPORT DeleteDocumentRequest : public WorkDocsRequest {

public:
    DeleteDocumentRequest(const DeleteDocumentRequest &other);
    DeleteDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDocumentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
