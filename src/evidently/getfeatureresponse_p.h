// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEATURERESPONSE_P_H
#define QTAWS_GETFEATURERESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class GetFeatureResponse;

class GetFeatureResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit GetFeatureResponsePrivate(GetFeatureResponse * const q);

    void parseGetFeatureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFeatureResponse)
    Q_DISABLE_COPY(GetFeatureResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
