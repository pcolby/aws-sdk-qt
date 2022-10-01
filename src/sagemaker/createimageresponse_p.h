// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGERESPONSE_P_H
#define QTAWS_CREATEIMAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateImageResponse;

class CreateImageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateImageResponsePrivate(CreateImageResponse * const q);

    void parseCreateImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateImageResponse)
    Q_DISABLE_COPY(CreateImageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
