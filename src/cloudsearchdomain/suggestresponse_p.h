// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUGGESTRESPONSE_P_H
#define QTAWS_SUGGESTRESPONSE_P_H

#include "cloudsearchdomainresponse_p.h"

namespace QtAws {
namespace CloudSearchDomain {

class SuggestResponse;

class SuggestResponsePrivate : public CloudSearchDomainResponsePrivate {

public:

    explicit SuggestResponsePrivate(SuggestResponse * const q);

    void parseSuggestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SuggestResponse)
    Q_DISABLE_COPY(SuggestResponsePrivate)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
