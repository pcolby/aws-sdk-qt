// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKSETREQUEST_H
#define QTAWS_UPDATESTACKSETREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackSetRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT UpdateStackSetRequest : public CloudFormationRequest {

public:
    UpdateStackSetRequest(const UpdateStackSetRequest &other);
    UpdateStackSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
