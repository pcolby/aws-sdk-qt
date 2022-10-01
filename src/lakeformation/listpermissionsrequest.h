// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSREQUEST_H
#define QTAWS_LISTPERMISSIONSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListPermissionsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT ListPermissionsRequest : public LakeFormationRequest {

public:
    ListPermissionsRequest(const ListPermissionsRequest &other);
    ListPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
