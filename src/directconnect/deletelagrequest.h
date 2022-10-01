// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAGREQUEST_H
#define QTAWS_DELETELAGREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteLagRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteLagRequest : public DirectConnectRequest {

public:
    DeleteLagRequest(const DeleteLagRequest &other);
    DeleteLagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
