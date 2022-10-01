// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWNAMEREQUEST_H
#define QTAWS_UPDATECONTACTFLOWNAMEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowNameRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowNameRequest : public ConnectRequest {

public:
    UpdateContactFlowNameRequest(const UpdateContactFlowNameRequest &other);
    UpdateContactFlowNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowNameRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
