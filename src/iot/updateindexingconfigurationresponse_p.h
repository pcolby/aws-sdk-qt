// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINDEXINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEINDEXINGCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateIndexingConfigurationResponse;

class UpdateIndexingConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateIndexingConfigurationResponsePrivate(UpdateIndexingConfigurationResponse * const q);

    void parseUpdateIndexingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIndexingConfigurationResponse)
    Q_DISABLE_COPY(UpdateIndexingConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
