// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBULKTEMPLATEDEMAILRESPONSE_P_H
#define QTAWS_SENDBULKTEMPLATEDEMAILRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SendBulkTemplatedEmailResponse;

class SendBulkTemplatedEmailResponsePrivate : public SesResponsePrivate {

public:

    explicit SendBulkTemplatedEmailResponsePrivate(SendBulkTemplatedEmailResponse * const q);

    void parseSendBulkTemplatedEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendBulkTemplatedEmailResponse)
    Q_DISABLE_COPY(SendBulkTemplatedEmailResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
