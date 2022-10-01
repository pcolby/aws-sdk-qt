// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFINDINGSRESPONSE_P_H
#define QTAWS_DESCRIBEFINDINGSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DescribeFindingsResponse;

class DescribeFindingsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DescribeFindingsResponsePrivate(DescribeFindingsResponse * const q);

    void parseDescribeFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFindingsResponse)
    Q_DISABLE_COPY(DescribeFindingsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
