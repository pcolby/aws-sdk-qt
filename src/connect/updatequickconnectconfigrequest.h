// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUICKCONNECTCONFIGREQUEST_H
#define QTAWS_UPDATEQUICKCONNECTCONFIGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQuickConnectConfigRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateQuickConnectConfigRequest : public ConnectRequest {

public:
    UpdateQuickConnectConfigRequest(const UpdateQuickConnectConfigRequest &other);
    UpdateQuickConnectConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQuickConnectConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
