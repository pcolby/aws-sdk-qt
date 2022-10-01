// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTOREDQUERYRESPONSE_H
#define QTAWS_PUTSTOREDQUERYRESPONSE_H

#include "configserviceresponse.h"
#include "putstoredqueryrequest.h"

namespace QtAws {
namespace ConfigService {

class PutStoredQueryResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutStoredQueryResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutStoredQueryResponse(const PutStoredQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutStoredQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutStoredQueryResponse)
    Q_DISABLE_COPY(PutStoredQueryResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
