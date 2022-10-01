// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLONGTERMPRICINGRESPONSE_H
#define QTAWS_LISTLONGTERMPRICINGRESPONSE_H

#include "snowballresponse.h"
#include "listlongtermpricingrequest.h"

namespace QtAws {
namespace Snowball {

class ListLongTermPricingResponsePrivate;

class QTAWSSNOWBALL_EXPORT ListLongTermPricingResponse : public SnowballResponse {
    Q_OBJECT

public:
    ListLongTermPricingResponse(const ListLongTermPricingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLongTermPricingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLongTermPricingResponse)
    Q_DISABLE_COPY(ListLongTermPricingResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
