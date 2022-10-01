// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAGREQUEST_H
#define QTAWS_CREATELAGREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateLagRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateLagRequest : public DirectConnectRequest {

public:
    CreateLagRequest(const CreateLagRequest &other);
    CreateLagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
