// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSRESPONSE_H
#define QTAWS_DELETEACCESSRESPONSE_H

#include "transferresponse.h"
#include "deleteaccessrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteAccessResponsePrivate;

class QTAWSTRANSFER_EXPORT DeleteAccessResponse : public TransferResponse {
    Q_OBJECT

public:
    DeleteAccessResponse(const DeleteAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessResponse)
    Q_DISABLE_COPY(DeleteAccessResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
