// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTPERMISSIONRESPONSE_P_H
#define QTAWS_DESCRIBEDOCUMENTPERMISSIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeDocumentPermissionResponse;

class DescribeDocumentPermissionResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeDocumentPermissionResponsePrivate(DescribeDocumentPermissionResponse * const q);

    void parseDescribeDocumentPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentPermissionResponse)
    Q_DISABLE_COPY(DescribeDocumentPermissionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
