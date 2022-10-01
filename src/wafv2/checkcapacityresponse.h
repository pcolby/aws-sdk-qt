// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKCAPACITYRESPONSE_H
#define QTAWS_CHECKCAPACITYRESPONSE_H

#include "wafv2response.h"
#include "checkcapacityrequest.h"

namespace QtAws {
namespace Wafv2 {

class CheckCapacityResponsePrivate;

class QTAWSWAFV2_EXPORT CheckCapacityResponse : public Wafv2Response {
    Q_OBJECT

public:
    CheckCapacityResponse(const CheckCapacityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckCapacityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckCapacityResponse)
    Q_DISABLE_COPY(CheckCapacityResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
