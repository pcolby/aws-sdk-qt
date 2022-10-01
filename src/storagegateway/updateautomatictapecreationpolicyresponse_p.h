// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTOMATICTAPECREATIONPOLICYRESPONSE_P_H
#define QTAWS_UPDATEAUTOMATICTAPECREATIONPOLICYRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateAutomaticTapeCreationPolicyResponse;

class UpdateAutomaticTapeCreationPolicyResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateAutomaticTapeCreationPolicyResponsePrivate(UpdateAutomaticTapeCreationPolicyResponse * const q);

    void parseUpdateAutomaticTapeCreationPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAutomaticTapeCreationPolicyResponse)
    Q_DISABLE_COPY(UpdateAutomaticTapeCreationPolicyResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
