// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINRESPONSE_P_H
#define QTAWS_DESCRIBEDOMAINRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DescribeDomainResponse;

class DescribeDomainResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DescribeDomainResponsePrivate(DescribeDomainResponse * const q);

    void parseDescribeDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDomainResponse)
    Q_DISABLE_COPY(DescribeDomainResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
