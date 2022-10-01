// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHTEMPLATEVERSIONREQUEST_H
#define QTAWS_CREATELAUNCHTEMPLATEVERSIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateLaunchTemplateVersionRequestPrivate;

class QTAWSEC2_EXPORT CreateLaunchTemplateVersionRequest : public Ec2Request {

public:
    CreateLaunchTemplateVersionRequest(const CreateLaunchTemplateVersionRequest &other);
    CreateLaunchTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchTemplateVersionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
