// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTFILTERRESPONSE_H
#define QTAWS_DELETERECEIPTFILTERRESPONSE_H

#include "sesresponse.h"
#include "deletereceiptfilterrequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptFilterResponsePrivate;

class QTAWSSES_EXPORT DeleteReceiptFilterResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteReceiptFilterResponse(const DeleteReceiptFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReceiptFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReceiptFilterResponse)
    Q_DISABLE_COPY(DeleteReceiptFilterResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
