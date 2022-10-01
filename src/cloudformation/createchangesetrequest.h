// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANGESETREQUEST_H
#define QTAWS_CREATECHANGESETREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateChangeSetRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT CreateChangeSetRequest : public CloudFormationRequest {

public:
    CreateChangeSetRequest(const CreateChangeSetRequest &other);
    CreateChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChangeSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
