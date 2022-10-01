// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLAUNCHTEMPLATEREQUEST_H
#define QTAWS_MODIFYLAUNCHTEMPLATEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyLaunchTemplateRequestPrivate;

class QTAWSEC2_EXPORT ModifyLaunchTemplateRequest : public Ec2Request {

public:
    ModifyLaunchTemplateRequest(const ModifyLaunchTemplateRequest &other);
    ModifyLaunchTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLaunchTemplateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
