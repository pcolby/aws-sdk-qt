// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEALLRESOURCEPERMISSIONSREQUEST_H
#define QTAWS_REMOVEALLRESOURCEPERMISSIONSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class RemoveAllResourcePermissionsRequestPrivate;

class QTAWSWORKDOCS_EXPORT RemoveAllResourcePermissionsRequest : public WorkDocsRequest {

public:
    RemoveAllResourcePermissionsRequest(const RemoveAllResourcePermissionsRequest &other);
    RemoveAllResourcePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAllResourcePermissionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
