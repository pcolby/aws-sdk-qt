// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHTEMPLATEREQUEST_H
#define QTAWS_CREATELAUNCHTEMPLATEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateLaunchTemplateRequestPrivate;

class QTAWSEC2_EXPORT CreateLaunchTemplateRequest : public Ec2Request {

public:
    CreateLaunchTemplateRequest(const CreateLaunchTemplateRequest &other);
    CreateLaunchTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchTemplateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
