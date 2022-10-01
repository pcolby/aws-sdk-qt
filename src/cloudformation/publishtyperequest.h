// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHTYPEREQUEST_H
#define QTAWS_PUBLISHTYPEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class PublishTypeRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT PublishTypeRequest : public CloudFormationRequest {

public:
    PublishTypeRequest(const PublishTypeRequest &other);
    PublishTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
