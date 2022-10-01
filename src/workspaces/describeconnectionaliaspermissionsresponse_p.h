// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONALIASPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTIONALIASPERMISSIONSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectionAliasPermissionsResponse;

class DescribeConnectionAliasPermissionsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeConnectionAliasPermissionsResponsePrivate(DescribeConnectionAliasPermissionsResponse * const q);

    void parseDescribeConnectionAliasPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionAliasPermissionsResponse)
    Q_DISABLE_COPY(DescribeConnectionAliasPermissionsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
