// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_JOINDOMAINRESPONSE_H
#define QTAWS_JOINDOMAINRESPONSE_H

#include "storagegatewayresponse.h"
#include "joindomainrequest.h"

namespace QtAws {
namespace StorageGateway {

class JoinDomainResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT JoinDomainResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    JoinDomainResponse(const JoinDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const JoinDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(JoinDomainResponse)
    Q_DISABLE_COPY(JoinDomainResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
