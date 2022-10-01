// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISTRIBUTEDATASETENTRIESRESPONSE_P_H
#define QTAWS_DISTRIBUTEDATASETENTRIESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DistributeDatasetEntriesResponse;

class DistributeDatasetEntriesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DistributeDatasetEntriesResponsePrivate(DistributeDatasetEntriesResponse * const q);

    void parseDistributeDatasetEntriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DistributeDatasetEntriesResponse)
    Q_DISABLE_COPY(DistributeDatasetEntriesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
