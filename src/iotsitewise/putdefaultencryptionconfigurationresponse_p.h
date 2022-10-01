// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEFAULTENCRYPTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTDEFAULTENCRYPTIONCONFIGURATIONRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class PutDefaultEncryptionConfigurationResponse;

class PutDefaultEncryptionConfigurationResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit PutDefaultEncryptionConfigurationResponsePrivate(PutDefaultEncryptionConfigurationResponse * const q);

    void parsePutDefaultEncryptionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDefaultEncryptionConfigurationResponse)
    Q_DISABLE_COPY(PutDefaultEncryptionConfigurationResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
