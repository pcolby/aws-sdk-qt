// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATAEXCHANGERESPONSE_P_H
#define QTAWS_DATAEXCHANGERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DataExchange {

class DataExchangeResponse;

class DataExchangeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DataExchangeResponsePrivate(DataExchangeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DataExchangeResponse)
    Q_DISABLE_COPY(DataExchangeResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
