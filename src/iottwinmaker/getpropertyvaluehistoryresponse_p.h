// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPERTYVALUEHISTORYRESPONSE_P_H
#define QTAWS_GETPROPERTYVALUEHISTORYRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetPropertyValueHistoryResponse;

class GetPropertyValueHistoryResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit GetPropertyValueHistoryResponsePrivate(GetPropertyValueHistoryResponse * const q);

    void parseGetPropertyValueHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPropertyValueHistoryResponse)
    Q_DISABLE_COPY(GetPropertyValueHistoryResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
