// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENDQUOTARESPONSE_H
#define QTAWS_GETSENDQUOTARESPONSE_H

#include "sesresponse.h"
#include "getsendquotarequest.h"

namespace QtAws {
namespace Ses {

class GetSendQuotaResponsePrivate;

class QTAWSSES_EXPORT GetSendQuotaResponse : public SesResponse {
    Q_OBJECT

public:
    GetSendQuotaResponse(const GetSendQuotaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSendQuotaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSendQuotaResponse)
    Q_DISABLE_COPY(GetSendQuotaResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
