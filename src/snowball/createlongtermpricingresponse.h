// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELONGTERMPRICINGRESPONSE_H
#define QTAWS_CREATELONGTERMPRICINGRESPONSE_H

#include "snowballresponse.h"
#include "createlongtermpricingrequest.h"

namespace QtAws {
namespace Snowball {

class CreateLongTermPricingResponsePrivate;

class QTAWSSNOWBALL_EXPORT CreateLongTermPricingResponse : public SnowballResponse {
    Q_OBJECT

public:
    CreateLongTermPricingResponse(const CreateLongTermPricingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLongTermPricingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLongTermPricingResponse)
    Q_DISABLE_COPY(CreateLongTermPricingResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
