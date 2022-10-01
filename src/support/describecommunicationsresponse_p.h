// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMUNICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBECOMMUNICATIONSRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class DescribeCommunicationsResponse;

class DescribeCommunicationsResponsePrivate : public SupportResponsePrivate {

public:

    explicit DescribeCommunicationsResponsePrivate(DescribeCommunicationsResponse * const q);

    void parseDescribeCommunicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCommunicationsResponse)
    Q_DISABLE_COPY(DescribeCommunicationsResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
