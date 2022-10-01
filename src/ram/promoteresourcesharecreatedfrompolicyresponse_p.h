// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTERESOURCESHARECREATEDFROMPOLICYRESPONSE_P_H
#define QTAWS_PROMOTERESOURCESHARECREATEDFROMPOLICYRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class PromoteResourceShareCreatedFromPolicyResponse;

class PromoteResourceShareCreatedFromPolicyResponsePrivate : public RamResponsePrivate {

public:

    explicit PromoteResourceShareCreatedFromPolicyResponsePrivate(PromoteResourceShareCreatedFromPolicyResponse * const q);

    void parsePromoteResourceShareCreatedFromPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PromoteResourceShareCreatedFromPolicyResponse)
    Q_DISABLE_COPY(PromoteResourceShareCreatedFromPolicyResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
