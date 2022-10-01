// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERREQUEST_H
#define QTAWS_CREATEFOLDERREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateFolderRequestPrivate;

class QTAWSWORKDOCS_EXPORT CreateFolderRequest : public WorkDocsRequest {

public:
    CreateFolderRequest(const CreateFolderRequest &other);
    CreateFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFolderRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
