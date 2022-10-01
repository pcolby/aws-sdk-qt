// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHTEMPLATEREQUEST_H
#define QTAWS_DELETELAUNCHTEMPLATEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteLaunchTemplateRequestPrivate;

class QTAWSEC2_EXPORT DeleteLaunchTemplateRequest : public Ec2Request {

public:
    DeleteLaunchTemplateRequest(const DeleteLaunchTemplateRequest &other);
    DeleteLaunchTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchTemplateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
