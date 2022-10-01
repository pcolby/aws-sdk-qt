// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEVERSIONRESPONSE_P_H
#define QTAWS_CREATEIMAGEVERSIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateImageVersionResponse;

class CreateImageVersionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateImageVersionResponsePrivate(CreateImageVersionResponse * const q);

    void parseCreateImageVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateImageVersionResponse)
    Q_DISABLE_COPY(CreateImageVersionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
