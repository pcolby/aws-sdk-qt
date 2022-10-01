// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVETAPERECOVERYPOINTRESPONSE_H
#define QTAWS_RETRIEVETAPERECOVERYPOINTRESPONSE_H

#include "storagegatewayresponse.h"
#include "retrievetaperecoverypointrequest.h"

namespace QtAws {
namespace StorageGateway {

class RetrieveTapeRecoveryPointResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT RetrieveTapeRecoveryPointResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    RetrieveTapeRecoveryPointResponse(const RetrieveTapeRecoveryPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetrieveTapeRecoveryPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetrieveTapeRecoveryPointResponse)
    Q_DISABLE_COPY(RetrieveTapeRecoveryPointResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
