// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTRESPONSE_H
#define QTAWS_CREATEACCOUNTRESPONSE_H

#include "chimeresponse.h"
#include "createaccountrequest.h"

namespace QtAws {
namespace Chime {

class CreateAccountResponsePrivate;

class QTAWSCHIME_EXPORT CreateAccountResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateAccountResponse(const CreateAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountResponse)
    Q_DISABLE_COPY(CreateAccountResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
