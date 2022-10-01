// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUICKCONNECTNAMEREQUEST_H
#define QTAWS_UPDATEQUICKCONNECTNAMEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQuickConnectNameRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateQuickConnectNameRequest : public ConnectRequest {

public:
    UpdateQuickConnectNameRequest(const UpdateQuickConnectNameRequest &other);
    UpdateQuickConnectNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQuickConnectNameRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
