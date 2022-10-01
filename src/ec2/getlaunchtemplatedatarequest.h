// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHTEMPLATEDATAREQUEST_H
#define QTAWS_GETLAUNCHTEMPLATEDATAREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetLaunchTemplateDataRequestPrivate;

class QTAWSEC2_EXPORT GetLaunchTemplateDataRequest : public Ec2Request {

public:
    GetLaunchTemplateDataRequest(const GetLaunchTemplateDataRequest &other);
    GetLaunchTemplateDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchTemplateDataRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
