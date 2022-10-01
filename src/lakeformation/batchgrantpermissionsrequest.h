// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGRANTPERMISSIONSREQUEST_H
#define QTAWS_BATCHGRANTPERMISSIONSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class BatchGrantPermissionsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT BatchGrantPermissionsRequest : public LakeFormationRequest {

public:
    BatchGrantPermissionsRequest(const BatchGrantPermissionsRequest &other);
    BatchGrantPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGrantPermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
