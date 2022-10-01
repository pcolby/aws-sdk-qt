// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHTEMPLATEVERSIONSREQUEST_P_H
#define QTAWS_DELETELAUNCHTEMPLATEVERSIONSREQUEST_P_H

#include "ec2request_p.h"
#include "deletelaunchtemplateversionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLaunchTemplateVersionsRequest;

class DeleteLaunchTemplateVersionsRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteLaunchTemplateVersionsRequestPrivate(const Ec2Request::Action action,
                                   DeleteLaunchTemplateVersionsRequest * const q);
    DeleteLaunchTemplateVersionsRequestPrivate(const DeleteLaunchTemplateVersionsRequestPrivate &other,
                                   DeleteLaunchTemplateVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchTemplateVersionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
