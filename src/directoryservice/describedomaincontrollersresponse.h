// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONTROLLERSRESPONSE_H
#define QTAWS_DESCRIBEDOMAINCONTROLLERSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describedomaincontrollersrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDomainControllersResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeDomainControllersResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeDomainControllersResponse(const DescribeDomainControllersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainControllersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainControllersResponse)
    Q_DISABLE_COPY(DescribeDomainControllersResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
