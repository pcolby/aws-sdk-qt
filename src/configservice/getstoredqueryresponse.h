// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTOREDQUERYRESPONSE_H
#define QTAWS_GETSTOREDQUERYRESPONSE_H

#include "configserviceresponse.h"
#include "getstoredqueryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetStoredQueryResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetStoredQueryResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetStoredQueryResponse(const GetStoredQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStoredQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStoredQueryResponse)
    Q_DISABLE_COPY(GetStoredQueryResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
