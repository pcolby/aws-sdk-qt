// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTYPEREQUEST_H
#define QTAWS_DEREGISTERTYPEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DeregisterTypeRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DeregisterTypeRequest : public CloudFormationRequest {

public:
    DeregisterTypeRequest(const DeregisterTypeRequest &other);
    DeregisterTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
