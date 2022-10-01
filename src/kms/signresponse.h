// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNRESPONSE_H
#define QTAWS_SIGNRESPONSE_H

#include "kmsresponse.h"
#include "signrequest.h"

namespace QtAws {
namespace Kms {

class SignResponsePrivate;

class QTAWSKMS_EXPORT SignResponse : public KmsResponse {
    Q_OBJECT

public:
    SignResponse(const SignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignResponse)
    Q_DISABLE_COPY(SignResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
