// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCERESPONSE_H
#define QTAWS_GETINSTANCERESPONSE_H

#include "servicediscoveryresponse.h"
#include "getinstancerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetInstanceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT GetInstanceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    GetInstanceResponse(const GetInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceResponse)
    Q_DISABLE_COPY(GetInstanceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
