// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDRESSRESPONSE_H
#define QTAWS_CREATEADDRESSRESPONSE_H

#include "snowballresponse.h"
#include "createaddressrequest.h"

namespace QtAws {
namespace Snowball {

class CreateAddressResponsePrivate;

class QTAWSSNOWBALL_EXPORT CreateAddressResponse : public SnowballResponse {
    Q_OBJECT

public:
    CreateAddressResponse(const CreateAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAddressResponse)
    Q_DISABLE_COPY(CreateAddressResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
