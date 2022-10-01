// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSETRESPONSE_P_H
#define QTAWS_DESCRIBEPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DescribePermissionSetResponse;

class DescribePermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DescribePermissionSetResponsePrivate(DescribePermissionSetResponse * const q);

    void parseDescribePermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePermissionSetResponse)
    Q_DISABLE_COPY(DescribePermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
