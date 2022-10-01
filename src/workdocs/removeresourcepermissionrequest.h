// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVERESOURCEPERMISSIONREQUEST_H
#define QTAWS_REMOVERESOURCEPERMISSIONREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class RemoveResourcePermissionRequestPrivate;

class QTAWSWORKDOCS_EXPORT RemoveResourcePermissionRequest : public WorkDocsRequest {

public:
    RemoveResourcePermissionRequest(const RemoveResourcePermissionRequest &other);
    RemoveResourcePermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveResourcePermissionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
