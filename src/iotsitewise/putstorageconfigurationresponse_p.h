// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGECONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTSTORAGECONFIGURATIONRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class PutStorageConfigurationResponse;

class PutStorageConfigurationResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit PutStorageConfigurationResponsePrivate(PutStorageConfigurationResponse * const q);

    void parsePutStorageConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutStorageConfigurationResponse)
    Q_DISABLE_COPY(PutStorageConfigurationResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
