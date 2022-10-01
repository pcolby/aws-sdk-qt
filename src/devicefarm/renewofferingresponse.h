// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWOFFERINGRESPONSE_H
#define QTAWS_RENEWOFFERINGRESPONSE_H

#include "devicefarmresponse.h"
#include "renewofferingrequest.h"

namespace QtAws {
namespace DeviceFarm {

class RenewOfferingResponsePrivate;

class QTAWSDEVICEFARM_EXPORT RenewOfferingResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    RenewOfferingResponse(const RenewOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RenewOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RenewOfferingResponse)
    Q_DISABLE_COPY(RenewOfferingResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
