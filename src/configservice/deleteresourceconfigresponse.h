// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCECONFIGRESPONSE_H
#define QTAWS_DELETERESOURCECONFIGRESPONSE_H

#include "configserviceresponse.h"
#include "deleteresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteResourceConfigResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteResourceConfigResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteResourceConfigResponse(const DeleteResourceConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourceConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceConfigResponse)
    Q_DISABLE_COPY(DeleteResourceConfigResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
