// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLMIGRATIONSTACKRESPONSE_P_H
#define QTAWS_CREATEWEBACLMIGRATIONSTACKRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class CreateWebACLMigrationStackResponse;

class CreateWebACLMigrationStackResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit CreateWebACLMigrationStackResponsePrivate(CreateWebACLMigrationStackResponse * const q);

    void parseCreateWebACLMigrationStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWebACLMigrationStackResponse)
    Q_DISABLE_COPY(CreateWebACLMigrationStackResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
