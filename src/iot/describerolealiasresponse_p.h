// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROLEALIASRESPONSE_P_H
#define QTAWS_DESCRIBEROLEALIASRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeRoleAliasResponse;

class DescribeRoleAliasResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeRoleAliasResponsePrivate(DescribeRoleAliasResponse * const q);

    void parseDescribeRoleAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRoleAliasResponse)
    Q_DISABLE_COPY(DescribeRoleAliasResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
