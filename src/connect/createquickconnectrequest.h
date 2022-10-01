// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUICKCONNECTREQUEST_H
#define QTAWS_CREATEQUICKCONNECTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateQuickConnectRequestPrivate;

class QTAWSCONNECT_EXPORT CreateQuickConnectRequest : public ConnectRequest {

public:
    CreateQuickConnectRequest(const CreateQuickConnectRequest &other);
    CreateQuickConnectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQuickConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
