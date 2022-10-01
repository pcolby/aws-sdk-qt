// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSRESPONSE_H
#define QTAWS_CREATEACCESSRESPONSE_H

#include "transferresponse.h"
#include "createaccessrequest.h"

namespace QtAws {
namespace Transfer {

class CreateAccessResponsePrivate;

class QTAWSTRANSFER_EXPORT CreateAccessResponse : public TransferResponse {
    Q_OBJECT

public:
    CreateAccessResponse(const CreateAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessResponse)
    Q_DISABLE_COPY(CreateAccessResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
