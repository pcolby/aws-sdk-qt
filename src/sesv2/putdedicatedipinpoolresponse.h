// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPINPOOLRESPONSE_H
#define QTAWS_PUTDEDICATEDIPINPOOLRESPONSE_H

#include "sesv2response.h"
#include "putdedicatedipinpoolrequest.h"

namespace QtAws {
namespace SESv2 {

class PutDedicatedIpInPoolResponsePrivate;

class QTAWSSESV2_EXPORT PutDedicatedIpInPoolResponse : public SESv2Response {
    Q_OBJECT

public:
    PutDedicatedIpInPoolResponse(const PutDedicatedIpInPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDedicatedIpInPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDedicatedIpInPoolResponse)
    Q_DISABLE_COPY(PutDedicatedIpInPoolResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
