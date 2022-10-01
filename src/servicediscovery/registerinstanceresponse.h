// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCERESPONSE_H
#define QTAWS_REGISTERINSTANCERESPONSE_H

#include "servicediscoveryresponse.h"
#include "registerinstancerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class RegisterInstanceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT RegisterInstanceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    RegisterInstanceResponse(const RegisterInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterInstanceResponse)
    Q_DISABLE_COPY(RegisterInstanceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
