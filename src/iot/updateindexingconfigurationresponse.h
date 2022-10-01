// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINDEXINGCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEINDEXINGCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "updateindexingconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class UpdateIndexingConfigurationResponsePrivate;

class QTAWSIOT_EXPORT UpdateIndexingConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateIndexingConfigurationResponse(const UpdateIndexingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIndexingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIndexingConfigurationResponse)
    Q_DISABLE_COPY(UpdateIndexingConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
