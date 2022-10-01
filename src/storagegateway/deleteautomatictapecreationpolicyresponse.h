// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOMATICTAPECREATIONPOLICYRESPONSE_H
#define QTAWS_DELETEAUTOMATICTAPECREATIONPOLICYRESPONSE_H

#include "storagegatewayresponse.h"
#include "deleteautomatictapecreationpolicyrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteAutomaticTapeCreationPolicyResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteAutomaticTapeCreationPolicyResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteAutomaticTapeCreationPolicyResponse(const DeleteAutomaticTapeCreationPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAutomaticTapeCreationPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAutomaticTapeCreationPolicyResponse)
    Q_DISABLE_COPY(DeleteAutomaticTapeCreationPolicyResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
