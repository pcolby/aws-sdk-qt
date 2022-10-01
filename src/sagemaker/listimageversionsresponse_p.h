// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEVERSIONSRESPONSE_P_H
#define QTAWS_LISTIMAGEVERSIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListImageVersionsResponse;

class ListImageVersionsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListImageVersionsResponsePrivate(ListImageVersionsResponse * const q);

    void parseListImageVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImageVersionsResponse)
    Q_DISABLE_COPY(ListImageVersionsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
