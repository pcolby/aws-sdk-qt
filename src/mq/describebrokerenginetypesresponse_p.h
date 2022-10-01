// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERENGINETYPESRESPONSE_P_H
#define QTAWS_DESCRIBEBROKERENGINETYPESRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerEngineTypesResponse;

class DescribeBrokerEngineTypesResponsePrivate : public MqResponsePrivate {

public:

    explicit DescribeBrokerEngineTypesResponsePrivate(DescribeBrokerEngineTypesResponse * const q);

    void parseDescribeBrokerEngineTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBrokerEngineTypesResponse)
    Q_DISABLE_COPY(DescribeBrokerEngineTypesResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
