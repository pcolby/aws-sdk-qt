// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSRESPONSE_H
#define QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSRESPONSE_H

#include "directoryserviceresponse.h"
#include "updatenumberofdomaincontrollersrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateNumberOfDomainControllersResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UpdateNumberOfDomainControllersResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    UpdateNumberOfDomainControllersResponse(const UpdateNumberOfDomainControllersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNumberOfDomainControllersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNumberOfDomainControllersResponse)
    Q_DISABLE_COPY(UpdateNumberOfDomainControllersResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
