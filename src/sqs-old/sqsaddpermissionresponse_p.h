// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSADDPERMISSIONRESPONSE_P_H
#define SQSADDPERMISSIONRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsAddPermissionResponse;

class SqsAddPermissionResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsAddPermissionResponsePrivate(SqsAddPermissionResponse * const q);

    void parseAddPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsAddPermissionResponse)
    Q_DISABLE_COPY(SqsAddPermissionResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
