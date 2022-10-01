// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHLAKERESPONSE_P_H
#define QTAWS_HEALTHLAKERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace HealthLake {

class HealthLakeResponse;

class HealthLakeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit HealthLakeResponsePrivate(HealthLakeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(HealthLakeResponse)
    Q_DISABLE_COPY(HealthLakeResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
