// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDRTACCESSRESPONSE_H
#define QTAWS_DESCRIBEDRTACCESSRESPONSE_H

#include "shieldresponse.h"
#include "describedrtaccessrequest.h"

namespace QtAws {
namespace Shield {

class DescribeDRTAccessResponsePrivate;

class QTAWSSHIELD_EXPORT DescribeDRTAccessResponse : public ShieldResponse {
    Q_OBJECT

public:
    DescribeDRTAccessResponse(const DescribeDRTAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDRTAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDRTAccessResponse)
    Q_DISABLE_COPY(DescribeDRTAccessResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
