// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPSNAMESPACERESPONSE_P_H
#define QTAWS_DELETERULEGROUPSNAMESPACERESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class DeleteRuleGroupsNamespaceResponse;

class DeleteRuleGroupsNamespaceResponsePrivate : public AmpResponsePrivate {

public:

    explicit DeleteRuleGroupsNamespaceResponsePrivate(DeleteRuleGroupsNamespaceResponse * const q);

    void parseDeleteRuleGroupsNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRuleGroupsNamespaceResponse)
    Q_DISABLE_COPY(DeleteRuleGroupsNamespaceResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
