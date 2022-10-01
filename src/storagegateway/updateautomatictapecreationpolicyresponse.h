// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTOMATICTAPECREATIONPOLICYRESPONSE_H
#define QTAWS_UPDATEAUTOMATICTAPECREATIONPOLICYRESPONSE_H

#include "storagegatewayresponse.h"
#include "updateautomatictapecreationpolicyrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateAutomaticTapeCreationPolicyResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateAutomaticTapeCreationPolicyResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateAutomaticTapeCreationPolicyResponse(const UpdateAutomaticTapeCreationPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAutomaticTapeCreationPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAutomaticTapeCreationPolicyResponse)
    Q_DISABLE_COPY(UpdateAutomaticTapeCreationPolicyResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
