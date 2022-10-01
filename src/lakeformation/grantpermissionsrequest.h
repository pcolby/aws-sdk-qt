// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTPERMISSIONSREQUEST_H
#define QTAWS_GRANTPERMISSIONSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GrantPermissionsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GrantPermissionsRequest : public LakeFormationRequest {

public:
    GrantPermissionsRequest(const GrantPermissionsRequest &other);
    GrantPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GrantPermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
