// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEPHONENUMBERRESPONSE_H
#define QTAWS_BATCHUPDATEPHONENUMBERRESPONSE_H

#include "chimeresponse.h"
#include "batchupdatephonenumberrequest.h"

namespace QtAws {
namespace Chime {

class BatchUpdatePhoneNumberResponsePrivate;

class QTAWSCHIME_EXPORT BatchUpdatePhoneNumberResponse : public ChimeResponse {
    Q_OBJECT

public:
    BatchUpdatePhoneNumberResponse(const BatchUpdatePhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdatePhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdatePhoneNumberResponse)
    Q_DISABLE_COPY(BatchUpdatePhoneNumberResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
