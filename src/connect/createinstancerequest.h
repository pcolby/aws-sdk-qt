// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEREQUEST_H
#define QTAWS_CREATEINSTANCEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateInstanceRequestPrivate;

class QTAWSCONNECT_EXPORT CreateInstanceRequest : public ConnectRequest {

public:
    CreateInstanceRequest(const CreateInstanceRequest &other);
    CreateInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
