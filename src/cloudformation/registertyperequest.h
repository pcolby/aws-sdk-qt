// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTYPEREQUEST_H
#define QTAWS_REGISTERTYPEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class RegisterTypeRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT RegisterTypeRequest : public CloudFormationRequest {

public:
    RegisterTypeRequest(const RegisterTypeRequest &other);
    RegisterTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
