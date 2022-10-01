// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERPATHREQUEST_H
#define QTAWS_GETFOLDERPATHREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetFolderPathRequestPrivate;

class QTAWSWORKDOCS_EXPORT GetFolderPathRequest : public WorkDocsRequest {

public:
    GetFolderPathRequest(const GetFolderPathRequest &other);
    GetFolderPathRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFolderPathRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
