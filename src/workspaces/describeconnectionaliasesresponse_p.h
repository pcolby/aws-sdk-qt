// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONALIASESRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTIONALIASESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectionAliasesResponse;

class DescribeConnectionAliasesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeConnectionAliasesResponsePrivate(DescribeConnectionAliasesResponse * const q);

    void parseDescribeConnectionAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionAliasesResponse)
    Q_DISABLE_COPY(DescribeConnectionAliasesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
