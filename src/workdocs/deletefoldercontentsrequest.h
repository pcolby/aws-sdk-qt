// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERCONTENTSREQUEST_H
#define QTAWS_DELETEFOLDERCONTENTSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteFolderContentsRequestPrivate;

class QTAWSWORKDOCS_EXPORT DeleteFolderContentsRequest : public WorkDocsRequest {

public:
    DeleteFolderContentsRequest(const DeleteFolderContentsRequest &other);
    DeleteFolderContentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFolderContentsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
