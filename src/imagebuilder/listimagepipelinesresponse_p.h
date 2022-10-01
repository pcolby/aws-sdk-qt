// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPIPELINESRESPONSE_P_H
#define QTAWS_LISTIMAGEPIPELINESRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePipelinesResponse;

class ListImagePipelinesResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListImagePipelinesResponsePrivate(ListImagePipelinesResponse * const q);

    void parseListImagePipelinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImagePipelinesResponse)
    Q_DISABLE_COPY(ListImagePipelinesResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
