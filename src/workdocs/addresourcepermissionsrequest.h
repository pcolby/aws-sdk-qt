// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDRESOURCEPERMISSIONSREQUEST_H
#define QTAWS_ADDRESOURCEPERMISSIONSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class AddResourcePermissionsRequestPrivate;

class QTAWSWORKDOCS_EXPORT AddResourcePermissionsRequest : public WorkDocsRequest {

public:
    AddResourcePermissionsRequest(const AddResourcePermissionsRequest &other);
    AddResourcePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddResourcePermissionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
