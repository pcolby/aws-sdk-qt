// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPIMAGECONFIGRESPONSE_P_H
#define QTAWS_CREATEAPPIMAGECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateAppImageConfigResponse;

class CreateAppImageConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateAppImageConfigResponsePrivate(CreateAppImageConfigResponse * const q);

    void parseCreateAppImageConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppImageConfigResponse)
    Q_DISABLE_COPY(CreateAppImageConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
