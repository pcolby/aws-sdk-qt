// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSETMODELRESPONSE_P_H
#define QTAWS_DELETEASSETMODELRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteAssetModelResponse;

class DeleteAssetModelResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DeleteAssetModelResponsePrivate(DeleteAssetModelResponse * const q);

    void parseDeleteAssetModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssetModelResponse)
    Q_DISABLE_COPY(DeleteAssetModelResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
