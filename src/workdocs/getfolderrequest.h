// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERREQUEST_H
#define QTAWS_GETFOLDERREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetFolderRequestPrivate;

class QTAWSWORKDOCS_EXPORT GetFolderRequest : public WorkDocsRequest {

public:
    GetFolderRequest(const GetFolderRequest &other);
    GetFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFolderRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
