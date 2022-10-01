// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILERESPONSE_H
#define QTAWS_DELETEPROFILERESPONSE_H

#include "transferresponse.h"
#include "deleteprofilerequest.h"

namespace QtAws {
namespace Transfer {

class DeleteProfileResponsePrivate;

class QTAWSTRANSFER_EXPORT DeleteProfileResponse : public TransferResponse {
    Q_OBJECT

public:
    DeleteProfileResponse(const DeleteProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileResponse)
    Q_DISABLE_COPY(DeleteProfileResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
