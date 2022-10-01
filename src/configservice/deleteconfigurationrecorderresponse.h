// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONRECORDERRESPONSE_H
#define QTAWS_DELETECONFIGURATIONRECORDERRESPONSE_H

#include "configserviceresponse.h"
#include "deleteconfigurationrecorderrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigurationRecorderResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteConfigurationRecorderResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteConfigurationRecorderResponse(const DeleteConfigurationRecorderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigurationRecorderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationRecorderResponse)
    Q_DISABLE_COPY(DeleteConfigurationRecorderResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
