// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEKMSKEYRESPONSE_P_H
#define QTAWS_ASSOCIATEKMSKEYRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class AssociateKmsKeyResponse;

class AssociateKmsKeyResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit AssociateKmsKeyResponsePrivate(AssociateKmsKeyResponse * const q);

    void parseAssociateKmsKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateKmsKeyResponse)
    Q_DISABLE_COPY(AssociateKmsKeyResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
