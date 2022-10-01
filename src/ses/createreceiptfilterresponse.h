// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTFILTERRESPONSE_H
#define QTAWS_CREATERECEIPTFILTERRESPONSE_H

#include "sesresponse.h"
#include "createreceiptfilterrequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptFilterResponsePrivate;

class QTAWSSES_EXPORT CreateReceiptFilterResponse : public SesResponse {
    Q_OBJECT

public:
    CreateReceiptFilterResponse(const CreateReceiptFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReceiptFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReceiptFilterResponse)
    Q_DISABLE_COPY(CreateReceiptFilterResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
