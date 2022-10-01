// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATETEMPLATEREQUEST_H
#define QTAWS_VALIDATETEMPLATEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ValidateTemplateRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ValidateTemplateRequest : public CloudFormationRequest {

public:
    ValidateTemplateRequest(const ValidateTemplateRequest &other);
    ValidateTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateTemplateRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
