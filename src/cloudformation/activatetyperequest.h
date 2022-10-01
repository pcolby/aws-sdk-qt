// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATETYPEREQUEST_H
#define QTAWS_ACTIVATETYPEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ActivateTypeRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ActivateTypeRequest : public CloudFormationRequest {

public:
    ActivateTypeRequest(const ActivateTypeRequest &other);
    ActivateTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
