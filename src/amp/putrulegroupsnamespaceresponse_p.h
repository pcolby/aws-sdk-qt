// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULEGROUPSNAMESPACERESPONSE_P_H
#define QTAWS_PUTRULEGROUPSNAMESPACERESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class PutRuleGroupsNamespaceResponse;

class PutRuleGroupsNamespaceResponsePrivate : public AmpResponsePrivate {

public:

    explicit PutRuleGroupsNamespaceResponsePrivate(PutRuleGroupsNamespaceResponse * const q);

    void parsePutRuleGroupsNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRuleGroupsNamespaceResponse)
    Q_DISABLE_COPY(PutRuleGroupsNamespaceResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
