// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETENTRIESRESPONSE_P_H
#define QTAWS_UPDATEDATASETENTRIESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class UpdateDatasetEntriesResponse;

class UpdateDatasetEntriesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit UpdateDatasetEntriesResponsePrivate(UpdateDatasetEntriesResponse * const q);

    void parseUpdateDatasetEntriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDatasetEntriesResponse)
    Q_DISABLE_COPY(UpdateDatasetEntriesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
