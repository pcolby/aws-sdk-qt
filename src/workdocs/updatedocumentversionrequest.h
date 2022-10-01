// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTVERSIONREQUEST_H
#define QTAWS_UPDATEDOCUMENTVERSIONREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateDocumentVersionRequestPrivate;

class QTAWSWORKDOCS_EXPORT UpdateDocumentVersionRequest : public WorkDocsRequest {

public:
    UpdateDocumentVersionRequest(const UpdateDocumentVersionRequest &other);
    UpdateDocumentVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentVersionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
