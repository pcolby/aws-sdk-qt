// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGSERVICERESPONSE_P_H
#define QTAWS_CONFIGSERVICERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ConfigService {

class ConfigServiceResponse;

class ConfigServiceResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ConfigServiceResponsePrivate(ConfigServiceResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfigServiceResponse)
    Q_DISABLE_COPY(ConfigServiceResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
