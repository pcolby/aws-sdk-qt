// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEARCHIVERESPONSE_H
#define QTAWS_DELETETAPEARCHIVERESPONSE_H

#include "storagegatewayresponse.h"
#include "deletetapearchiverequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapeArchiveResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteTapeArchiveResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteTapeArchiveResponse(const DeleteTapeArchiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTapeArchiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTapeArchiveResponse)
    Q_DISABLE_COPY(DeleteTapeArchiveResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
