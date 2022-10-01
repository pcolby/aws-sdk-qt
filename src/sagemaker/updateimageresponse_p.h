// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGERESPONSE_P_H
#define QTAWS_UPDATEIMAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateImageResponse;

class UpdateImageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateImageResponsePrivate(UpdateImageResponse * const q);

    void parseUpdateImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateImageResponse)
    Q_DISABLE_COPY(UpdateImageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
