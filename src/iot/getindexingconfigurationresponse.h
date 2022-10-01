// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINDEXINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETINDEXINGCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "getindexingconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class GetIndexingConfigurationResponsePrivate;

class QTAWSIOT_EXPORT GetIndexingConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    GetIndexingConfigurationResponse(const GetIndexingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIndexingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIndexingConfigurationResponse)
    Q_DISABLE_COPY(GetIndexingConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
