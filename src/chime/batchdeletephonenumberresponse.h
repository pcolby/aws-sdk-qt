// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEPHONENUMBERRESPONSE_H
#define QTAWS_BATCHDELETEPHONENUMBERRESPONSE_H

#include "chimeresponse.h"
#include "batchdeletephonenumberrequest.h"

namespace QtAws {
namespace Chime {

class BatchDeletePhoneNumberResponsePrivate;

class QTAWSCHIME_EXPORT BatchDeletePhoneNumberResponse : public ChimeResponse {
    Q_OBJECT

public:
    BatchDeletePhoneNumberResponse(const BatchDeletePhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeletePhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeletePhoneNumberResponse)
    Q_DISABLE_COPY(BatchDeletePhoneNumberResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
