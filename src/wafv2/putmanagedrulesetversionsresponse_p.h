// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDRULESETVERSIONSRESPONSE_P_H
#define QTAWS_PUTMANAGEDRULESETVERSIONSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class PutManagedRuleSetVersionsResponse;

class PutManagedRuleSetVersionsResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit PutManagedRuleSetVersionsResponsePrivate(PutManagedRuleSetVersionsResponse * const q);

    void parsePutManagedRuleSetVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutManagedRuleSetVersionsResponse)
    Q_DISABLE_COPY(PutManagedRuleSetVersionsResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
