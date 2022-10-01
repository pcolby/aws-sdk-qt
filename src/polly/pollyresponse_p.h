// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLYRESPONSE_P_H
#define QTAWS_POLLYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Polly {

class PollyResponse;

class PollyResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PollyResponsePrivate(PollyResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PollyResponse)
    Q_DISABLE_COPY(PollyResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
