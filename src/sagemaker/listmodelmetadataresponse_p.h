// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELMETADATARESPONSE_P_H
#define QTAWS_LISTMODELMETADATARESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListModelMetadataResponse;

class ListModelMetadataResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListModelMetadataResponsePrivate(ListModelMetadataResponse * const q);

    void parseListModelMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelMetadataResponse)
    Q_DISABLE_COPY(ListModelMetadataResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
