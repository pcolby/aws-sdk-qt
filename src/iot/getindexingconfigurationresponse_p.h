// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINDEXINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETINDEXINGCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetIndexingConfigurationResponse;

class GetIndexingConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetIndexingConfigurationResponsePrivate(GetIndexingConfigurationResponse * const q);

    void parseGetIndexingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIndexingConfigurationResponse)
    Q_DISABLE_COPY(GetIndexingConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
