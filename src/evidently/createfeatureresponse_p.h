// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFEATURERESPONSE_P_H
#define QTAWS_CREATEFEATURERESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class CreateFeatureResponse;

class CreateFeatureResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit CreateFeatureResponsePrivate(CreateFeatureResponse * const q);

    void parseCreateFeatureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFeatureResponse)
    Q_DISABLE_COPY(CreateFeatureResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
