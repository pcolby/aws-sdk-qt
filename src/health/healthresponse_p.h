// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHRESPONSE_P_H
#define QTAWS_HEALTHRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Health {

class HealthResponse;

class HealthResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit HealthResponsePrivate(HealthResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(HealthResponse)
    Q_DISABLE_COPY(HealthResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
