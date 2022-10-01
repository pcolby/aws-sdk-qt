// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOMATICTAPECREATIONPOLICIESRESPONSE_H
#define QTAWS_LISTAUTOMATICTAPECREATIONPOLICIESRESPONSE_H

#include "storagegatewayresponse.h"
#include "listautomatictapecreationpoliciesrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListAutomaticTapeCreationPoliciesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListAutomaticTapeCreationPoliciesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListAutomaticTapeCreationPoliciesResponse(const ListAutomaticTapeCreationPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAutomaticTapeCreationPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAutomaticTapeCreationPoliciesResponse)
    Q_DISABLE_COPY(ListAutomaticTapeCreationPoliciesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
