// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTYPEDEFAULTVERSIONREQUEST_H
#define QTAWS_SETTYPEDEFAULTVERSIONREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class SetTypeDefaultVersionRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT SetTypeDefaultVersionRequest : public CloudFormationRequest {

public:
    SetTypeDefaultVersionRequest(const SetTypeDefaultVersionRequest &other);
    SetTypeDefaultVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTypeDefaultVersionRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
