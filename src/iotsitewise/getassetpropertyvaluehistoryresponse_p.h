// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYVALUEHISTORYRESPONSE_P_H
#define QTAWS_GETASSETPROPERTYVALUEHISTORYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyValueHistoryResponse;

class GetAssetPropertyValueHistoryResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit GetAssetPropertyValueHistoryResponsePrivate(GetAssetPropertyValueHistoryResponse * const q);

    void parseGetAssetPropertyValueHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssetPropertyValueHistoryResponse)
    Q_DISABLE_COPY(GetAssetPropertyValueHistoryResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
