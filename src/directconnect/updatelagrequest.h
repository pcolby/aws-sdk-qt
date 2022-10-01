// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAGREQUEST_H
#define QTAWS_UPDATELAGREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateLagRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateLagRequest : public DirectConnectRequest {

public:
    UpdateLagRequest(const UpdateLagRequest &other);
    UpdateLagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
