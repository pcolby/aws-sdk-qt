// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKSETREQUEST_H
#define QTAWS_CREATESTACKSETREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackSetRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT CreateStackSetRequest : public CloudFormationRequest {

public:
    CreateStackSetRequest(const CreateStackSetRequest &other);
    CreateStackSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
