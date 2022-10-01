// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTFLOWREQUEST_H
#define QTAWS_DELETECONTACTFLOWREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteContactFlowRequestPrivate;

class QTAWSCONNECT_EXPORT DeleteContactFlowRequest : public ConnectRequest {

public:
    DeleteContactFlowRequest(const DeleteContactFlowRequest &other);
    DeleteContactFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
