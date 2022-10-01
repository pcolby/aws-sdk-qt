// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETMODELRESPONSE_P_H
#define QTAWS_CREATEASSETMODELRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAssetModelResponse;

class CreateAssetModelResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit CreateAssetModelResponsePrivate(CreateAssetModelResponse * const q);

    void parseCreateAssetModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssetModelResponse)
    Q_DISABLE_COPY(CreateAssetModelResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
