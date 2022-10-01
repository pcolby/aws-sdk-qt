// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMANAGEDRULESETVERSIONEXPIRYDATERESPONSE_P_H
#define QTAWS_UPDATEMANAGEDRULESETVERSIONEXPIRYDATERESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class UpdateManagedRuleSetVersionExpiryDateResponse;

class UpdateManagedRuleSetVersionExpiryDateResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit UpdateManagedRuleSetVersionExpiryDateResponsePrivate(UpdateManagedRuleSetVersionExpiryDateResponse * const q);

    void parseUpdateManagedRuleSetVersionExpiryDateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateManagedRuleSetVersionExpiryDateResponse)
    Q_DISABLE_COPY(UpdateManagedRuleSetVersionExpiryDateResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
