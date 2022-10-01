// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATURERESPONSE_P_H
#define QTAWS_UPDATEFEATURERESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class UpdateFeatureResponse;

class UpdateFeatureResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit UpdateFeatureResponsePrivate(UpdateFeatureResponse * const q);

    void parseUpdateFeatureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFeatureResponse)
    Q_DISABLE_COPY(UpdateFeatureResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
