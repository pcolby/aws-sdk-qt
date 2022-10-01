// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTERCONNECTREQUEST_H
#define QTAWS_CREATEINTERCONNECTREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateInterconnectRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateInterconnectRequest : public DirectConnectRequest {

public:
    CreateInterconnectRequest(const CreateInterconnectRequest &other);
    CreateInterconnectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInterconnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
