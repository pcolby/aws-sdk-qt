// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTOREDQUERIESRESPONSE_H
#define QTAWS_LISTSTOREDQUERIESRESPONSE_H

#include "configserviceresponse.h"
#include "liststoredqueriesrequest.h"

namespace QtAws {
namespace ConfigService {

class ListStoredQueriesResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT ListStoredQueriesResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    ListStoredQueriesResponse(const ListStoredQueriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStoredQueriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStoredQueriesResponse)
    Q_DISABLE_COPY(ListStoredQueriesResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
