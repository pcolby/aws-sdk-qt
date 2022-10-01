// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIPADDRESSTYPERESPONSE_H
#define QTAWS_SETIPADDRESSTYPERESPONSE_H

#include "lightsailresponse.h"
#include "setipaddresstyperequest.h"

namespace QtAws {
namespace Lightsail {

class SetIpAddressTypeResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT SetIpAddressTypeResponse : public LightsailResponse {
    Q_OBJECT

public:
    SetIpAddressTypeResponse(const SetIpAddressTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIpAddressTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIpAddressTypeResponse)
    Q_DISABLE_COPY(SetIpAddressTypeResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
