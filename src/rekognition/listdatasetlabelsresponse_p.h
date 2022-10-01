// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETLABELSRESPONSE_P_H
#define QTAWS_LISTDATASETLABELSRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class ListDatasetLabelsResponse;

class ListDatasetLabelsResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit ListDatasetLabelsResponsePrivate(ListDatasetLabelsResponse * const q);

    void parseListDatasetLabelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasetLabelsResponse)
    Q_DISABLE_COPY(ListDatasetLabelsResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
