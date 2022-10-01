// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVETAPEARCHIVERESPONSE_H
#define QTAWS_RETRIEVETAPEARCHIVERESPONSE_H

#include "storagegatewayresponse.h"
#include "retrievetapearchiverequest.h"

namespace QtAws {
namespace StorageGateway {

class RetrieveTapeArchiveResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT RetrieveTapeArchiveResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    RetrieveTapeArchiveResponse(const RetrieveTapeArchiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetrieveTapeArchiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetrieveTapeArchiveResponse)
    Q_DISABLE_COPY(RetrieveTapeArchiveResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
