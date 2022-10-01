// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTRIBUTEVALUESRESPONSE_H
#define QTAWS_GETATTRIBUTEVALUESRESPONSE_H

#include "pricingresponse.h"
#include "getattributevaluesrequest.h"

namespace QtAws {
namespace Pricing {

class GetAttributeValuesResponsePrivate;

class QTAWSPRICING_EXPORT GetAttributeValuesResponse : public PricingResponse {
    Q_OBJECT

public:
    GetAttributeValuesResponse(const GetAttributeValuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAttributeValuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAttributeValuesResponse)
    Q_DISABLE_COPY(GetAttributeValuesResponse)

};

} // namespace Pricing
} // namespace QtAws

#endif
