// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMODULECONTENTREQUEST_H
#define QTAWS_UPDATECONTACTFLOWMODULECONTENTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowModuleContentRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowModuleContentRequest : public ConnectRequest {

public:
    UpdateContactFlowModuleContentRequest(const UpdateContactFlowModuleContentRequest &other);
    UpdateContactFlowModuleContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowModuleContentRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
