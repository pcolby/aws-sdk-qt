// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSRESPONSE_P_H
#define QTAWS_RDSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Rds {

class RdsResponse;

class RdsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RdsResponsePrivate(RdsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RdsResponse)
    Q_DISABLE_COPY(RdsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
