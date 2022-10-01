// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTRESPONSE_H
#define QTAWS_DELETEACCOUNTRESPONSE_H

#include "chimeresponse.h"
#include "deleteaccountrequest.h"

namespace QtAws {
namespace Chime {

class DeleteAccountResponsePrivate;

class QTAWSCHIME_EXPORT DeleteAccountResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteAccountResponse(const DeleteAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountResponse)
    Q_DISABLE_COPY(DeleteAccountResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
