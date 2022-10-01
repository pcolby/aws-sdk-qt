// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBEPOLICYRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DescribePolicyResponse;

class DescribePolicyResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DescribePolicyResponsePrivate(DescribePolicyResponse * const q);

    void parseDescribePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePolicyResponse)
    Q_DISABLE_COPY(DescribePolicyResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
