// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWBALLRESPONSE_P_H
#define QTAWS_SNOWBALLRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Snowball {

class SnowballResponse;

class SnowballResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SnowballResponsePrivate(SnowballResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SnowballResponse)
    Q_DISABLE_COPY(SnowballResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
