// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKREQUEST_H
#define QTAWS_UPDATESTACKREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT UpdateStackRequest : public CloudFormationRequest {

public:
    UpdateStackRequest(const UpdateStackRequest &other);
    UpdateStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStackRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
