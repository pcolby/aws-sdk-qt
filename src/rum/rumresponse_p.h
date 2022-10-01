// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUMRESPONSE_P_H
#define QTAWS_RUMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Rum {

class RumResponse;

class RumResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RumResponsePrivate(RumResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RumResponse)
    Q_DISABLE_COPY(RumResponsePrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
