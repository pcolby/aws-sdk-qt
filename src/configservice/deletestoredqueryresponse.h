// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTOREDQUERYRESPONSE_H
#define QTAWS_DELETESTOREDQUERYRESPONSE_H

#include "configserviceresponse.h"
#include "deletestoredqueryrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteStoredQueryResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteStoredQueryResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteStoredQueryResponse(const DeleteStoredQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStoredQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStoredQueryResponse)
    Q_DISABLE_COPY(DeleteStoredQueryResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
