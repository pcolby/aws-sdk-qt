// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIMENSIONKEYSRESPONSE_P_H
#define QTAWS_DESCRIBEDIMENSIONKEYSRESPONSE_P_H

#include "piresponse_p.h"

namespace QtAws {
namespace Pi {

class DescribeDimensionKeysResponse;

class DescribeDimensionKeysResponsePrivate : public PiResponsePrivate {

public:

    explicit DescribeDimensionKeysResponsePrivate(DescribeDimensionKeysResponse * const q);

    void parseDescribeDimensionKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDimensionKeysResponse)
    Q_DISABLE_COPY(DescribeDimensionKeysResponsePrivate)

};

} // namespace Pi
} // namespace QtAws

#endif
