// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONRESPONSE_H
#define QTAWS_GETOPERATIONRESPONSE_H

#include "servicediscoveryresponse.h"
#include "getoperationrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetOperationResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT GetOperationResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    GetOperationResponse(const GetOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOperationResponse)
    Q_DISABLE_COPY(GetOperationResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
