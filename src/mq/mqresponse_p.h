// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MQRESPONSE_P_H
#define QTAWS_MQRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Mq {

class MqResponse;

class MqResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MqResponsePrivate(MqResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MqResponse)
    Q_DISABLE_COPY(MqResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
