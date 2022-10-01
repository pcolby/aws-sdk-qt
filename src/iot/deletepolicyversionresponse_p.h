// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYVERSIONRESPONSE_P_H
#define QTAWS_DELETEPOLICYVERSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeletePolicyVersionResponse;

class DeletePolicyVersionResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeletePolicyVersionResponsePrivate(DeletePolicyVersionResponse * const q);

    void parseDeletePolicyVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePolicyVersionResponse)
    Q_DISABLE_COPY(DeletePolicyVersionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
