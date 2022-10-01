// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTLOCKCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETOBJECTLOCKCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetObjectLockConfigurationResponse;

class GetObjectLockConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetObjectLockConfigurationResponsePrivate(GetObjectLockConfigurationResponse * const q);

    void parseGetObjectLockConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectLockConfigurationResponse)
    Q_DISABLE_COPY(GetObjectLockConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
