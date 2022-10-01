// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETRESOURCECONFIGRESPONSE_H
#define QTAWS_BATCHGETRESOURCECONFIGRESPONSE_H

#include "configserviceresponse.h"
#include "batchgetresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class BatchGetResourceConfigResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT BatchGetResourceConfigResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    BatchGetResourceConfigResponse(const BatchGetResourceConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetResourceConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetResourceConfigResponse)
    Q_DISABLE_COPY(BatchGetResourceConfigResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
