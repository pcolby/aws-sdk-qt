// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSREMOVEPERMISSIONRESPONSE_P_H
#define SQSREMOVEPERMISSIONRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsRemovePermissionResponse;

class SqsRemovePermissionResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsRemovePermissionResponsePrivate(SqsRemovePermissionResponse * const q);

    void parseRemovePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsRemovePermissionResponse)
    Q_DISABLE_COPY(SqsRemovePermissionResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
