// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVEPERMISSIONSFORPATHREQUEST_H
#define QTAWS_GETEFFECTIVEPERMISSIONSFORPATHREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetEffectivePermissionsForPathRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetEffectivePermissionsForPathRequest : public LakeFormationRequest {

public:
    GetEffectivePermissionsForPathRequest(const GetEffectivePermissionsForPathRequest &other);
    GetEffectivePermissionsForPathRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEffectivePermissionsForPathRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
