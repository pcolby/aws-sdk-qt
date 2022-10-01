// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROGRAMRESPONSE_P_H
#define QTAWS_DESCRIBEPROGRAMRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DescribeProgramResponse;

class DescribeProgramResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DescribeProgramResponsePrivate(DescribeProgramResponse * const q);

    void parseDescribeProgramResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProgramResponse)
    Q_DISABLE_COPY(DescribeProgramResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
