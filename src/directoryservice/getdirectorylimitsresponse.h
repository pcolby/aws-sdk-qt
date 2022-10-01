// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIRECTORYLIMITSRESPONSE_H
#define QTAWS_GETDIRECTORYLIMITSRESPONSE_H

#include "directoryserviceresponse.h"
#include "getdirectorylimitsrequest.h"

namespace QtAws {
namespace DirectoryService {

class GetDirectoryLimitsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT GetDirectoryLimitsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    GetDirectoryLimitsResponse(const GetDirectoryLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDirectoryLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDirectoryLimitsResponse)
    Q_DISABLE_COPY(GetDirectoryLimitsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
