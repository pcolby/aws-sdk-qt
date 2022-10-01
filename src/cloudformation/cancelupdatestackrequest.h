// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELUPDATESTACKREQUEST_H
#define QTAWS_CANCELUPDATESTACKREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class CancelUpdateStackRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT CancelUpdateStackRequest : public CloudFormationRequest {

public:
    CancelUpdateStackRequest(const CancelUpdateStackRequest &other);
    CancelUpdateStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelUpdateStackRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
