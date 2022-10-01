// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELONGTERMPRICINGRESPONSE_H
#define QTAWS_UPDATELONGTERMPRICINGRESPONSE_H

#include "snowballresponse.h"
#include "updatelongtermpricingrequest.h"

namespace QtAws {
namespace Snowball {

class UpdateLongTermPricingResponsePrivate;

class QTAWSSNOWBALL_EXPORT UpdateLongTermPricingResponse : public SnowballResponse {
    Q_OBJECT

public:
    UpdateLongTermPricingResponse(const UpdateLongTermPricingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLongTermPricingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLongTermPricingResponse)
    Q_DISABLE_COPY(UpdateLongTermPricingResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
