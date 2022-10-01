// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETERMINATIONPROTECTIONREQUEST_H
#define QTAWS_UPDATETERMINATIONPROTECTIONREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateTerminationProtectionRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT UpdateTerminationProtectionRequest : public CloudFormationRequest {

public:
    UpdateTerminationProtectionRequest(const UpdateTerminationProtectionRequest &other);
    UpdateTerminationProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTerminationProtectionRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
