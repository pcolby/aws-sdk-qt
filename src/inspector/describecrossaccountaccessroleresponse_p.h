// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECROSSACCOUNTACCESSROLERESPONSE_P_H
#define QTAWS_DESCRIBECROSSACCOUNTACCESSROLERESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DescribeCrossAccountAccessRoleResponse;

class DescribeCrossAccountAccessRoleResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DescribeCrossAccountAccessRoleResponsePrivate(DescribeCrossAccountAccessRoleResponse * const q);

    void parseDescribeCrossAccountAccessRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCrossAccountAccessRoleResponse)
    Q_DISABLE_COPY(DescribeCrossAccountAccessRoleResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
