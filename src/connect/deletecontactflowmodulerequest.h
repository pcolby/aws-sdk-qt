// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTFLOWMODULEREQUEST_H
#define QTAWS_DELETECONTACTFLOWMODULEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteContactFlowModuleRequestPrivate;

class QTAWSCONNECT_EXPORT DeleteContactFlowModuleRequest : public ConnectRequest {

public:
    DeleteContactFlowModuleRequest(const DeleteContactFlowModuleRequest &other);
    DeleteContactFlowModuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactFlowModuleRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
