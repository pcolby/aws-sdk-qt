// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERREQUEST_H
#define QTAWS_UPDATEFOLDERREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateFolderRequestPrivate;

class QTAWSWORKDOCS_EXPORT UpdateFolderRequest : public WorkDocsRequest {

public:
    UpdateFolderRequest(const UpdateFolderRequest &other);
    UpdateFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFolderRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
