// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEVERSIONRESPONSE_P_H
#define QTAWS_DELETEIMAGEVERSIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteImageVersionResponse;

class DeleteImageVersionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteImageVersionResponsePrivate(DeleteImageVersionResponse * const q);

    void parseDeleteImageVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImageVersionResponse)
    Q_DISABLE_COPY(DeleteImageVersionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
