// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMETADATAREQUEST_P_H
#define QTAWS_UPDATECONTACTFLOWMETADATAREQUEST_P_H

#include "connectrequest_p.h"
#include "updatecontactflowmetadatarequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowMetadataRequest;

class UpdateContactFlowMetadataRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateContactFlowMetadataRequestPrivate(const ConnectRequest::Action action,
                                   UpdateContactFlowMetadataRequest * const q);
    UpdateContactFlowMetadataRequestPrivate(const UpdateContactFlowMetadataRequestPrivate &other,
                                   UpdateContactFlowMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowMetadataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
