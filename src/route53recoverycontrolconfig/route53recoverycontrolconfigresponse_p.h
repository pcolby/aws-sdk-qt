/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ROUTE53RECOVERYCONTROLCONFIGRESPONSE_P_H
#define QTAWS_ROUTE53RECOVERYCONTROLCONFIGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class Route53RecoveryControlConfigResponse;

class Route53RecoveryControlConfigResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Route53RecoveryControlConfigResponsePrivate(Route53RecoveryControlConfigResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryControlConfigResponse)
    Q_DISABLE_COPY(Route53RecoveryControlConfigResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
