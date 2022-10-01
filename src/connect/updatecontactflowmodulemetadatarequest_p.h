// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMODULEMETADATAREQUEST_P_H
#define QTAWS_UPDATECONTACTFLOWMODULEMETADATAREQUEST_P_H

#include "connectrequest_p.h"
#include "updatecontactflowmodulemetadatarequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowModuleMetadataRequest;

class UpdateContactFlowModuleMetadataRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateContactFlowModuleMetadataRequestPrivate(const ConnectRequest::Action action,
                                   UpdateContactFlowModuleMetadataRequest * const q);
    UpdateContactFlowModuleMetadataRequestPrivate(const UpdateContactFlowModuleMetadataRequestPrivate &other,
                                   UpdateContactFlowModuleMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowModuleMetadataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
