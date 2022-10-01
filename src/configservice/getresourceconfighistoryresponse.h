// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCECONFIGHISTORYRESPONSE_H
#define QTAWS_GETRESOURCECONFIGHISTORYRESPONSE_H

#include "configserviceresponse.h"
#include "getresourceconfighistoryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetResourceConfigHistoryResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetResourceConfigHistoryResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetResourceConfigHistoryResponse(const GetResourceConfigHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceConfigHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceConfigHistoryResponse)
    Q_DISABLE_COPY(GetResourceConfigHistoryResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
