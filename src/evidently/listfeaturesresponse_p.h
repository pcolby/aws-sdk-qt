// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFEATURESRESPONSE_P_H
#define QTAWS_LISTFEATURESRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class ListFeaturesResponse;

class ListFeaturesResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit ListFeaturesResponsePrivate(ListFeaturesResponse * const q);

    void parseListFeaturesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFeaturesResponse)
    Q_DISABLE_COPY(ListFeaturesResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
