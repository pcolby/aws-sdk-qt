// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOMATICTAPECREATIONPOLICYRESPONSE_P_H
#define QTAWS_DELETEAUTOMATICTAPECREATIONPOLICYRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DeleteAutomaticTapeCreationPolicyResponse;

class DeleteAutomaticTapeCreationPolicyResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DeleteAutomaticTapeCreationPolicyResponsePrivate(DeleteAutomaticTapeCreationPolicyResponse * const q);

    void parseDeleteAutomaticTapeCreationPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAutomaticTapeCreationPolicyResponse)
    Q_DISABLE_COPY(DeleteAutomaticTapeCreationPolicyResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
