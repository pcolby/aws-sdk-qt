// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMODULEMETADATAREQUEST_H
#define QTAWS_UPDATECONTACTFLOWMODULEMETADATAREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowModuleMetadataRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowModuleMetadataRequest : public ConnectRequest {

public:
    UpdateContactFlowModuleMetadataRequest(const UpdateContactFlowModuleMetadataRequest &other);
    UpdateContactFlowModuleMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowModuleMetadataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
