// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEKMSKEYRESPONSE_P_H
#define QTAWS_DISASSOCIATEKMSKEYRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DisassociateKmsKeyResponse;

class DisassociateKmsKeyResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DisassociateKmsKeyResponsePrivate(DisassociateKmsKeyResponse * const q);

    void parseDisassociateKmsKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateKmsKeyResponse)
    Q_DISABLE_COPY(DisassociateKmsKeyResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
