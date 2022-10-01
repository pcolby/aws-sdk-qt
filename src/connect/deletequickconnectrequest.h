// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUICKCONNECTREQUEST_H
#define QTAWS_DELETEQUICKCONNECTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteQuickConnectRequestPrivate;

class QTAWSCONNECT_EXPORT DeleteQuickConnectRequest : public ConnectRequest {

public:
    DeleteQuickConnectRequest(const DeleteQuickConnectRequest &other);
    DeleteQuickConnectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQuickConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
