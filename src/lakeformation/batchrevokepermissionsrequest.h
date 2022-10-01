// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREVOKEPERMISSIONSREQUEST_H
#define QTAWS_BATCHREVOKEPERMISSIONSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class BatchRevokePermissionsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT BatchRevokePermissionsRequest : public LakeFormationRequest {

public:
    BatchRevokePermissionsRequest(const BatchRevokePermissionsRequest &other);
    BatchRevokePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchRevokePermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
