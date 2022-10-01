// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPSNAMESPACERESPONSE_P_H
#define QTAWS_CREATERULEGROUPSNAMESPACERESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class CreateRuleGroupsNamespaceResponse;

class CreateRuleGroupsNamespaceResponsePrivate : public AmpResponsePrivate {

public:

    explicit CreateRuleGroupsNamespaceResponsePrivate(CreateRuleGroupsNamespaceResponse * const q);

    void parseCreateRuleGroupsNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRuleGroupsNamespaceResponse)
    Q_DISABLE_COPY(CreateRuleGroupsNamespaceResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
