// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPIMAGECONFIGRESPONSE_P_H
#define QTAWS_UPDATEAPPIMAGECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateAppImageConfigResponse;

class UpdateAppImageConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateAppImageConfigResponsePrivate(UpdateAppImageConfigResponse * const q);

    void parseUpdateAppImageConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAppImageConfigResponse)
    Q_DISABLE_COPY(UpdateAppImageConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
