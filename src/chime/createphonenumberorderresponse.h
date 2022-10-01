// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPHONENUMBERORDERRESPONSE_H
#define QTAWS_CREATEPHONENUMBERORDERRESPONSE_H

#include "chimeresponse.h"
#include "createphonenumberorderrequest.h"

namespace QtAws {
namespace Chime {

class CreatePhoneNumberOrderResponsePrivate;

class QTAWSCHIME_EXPORT CreatePhoneNumberOrderResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreatePhoneNumberOrderResponse(const CreatePhoneNumberOrderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePhoneNumberOrderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePhoneNumberOrderResponse)
    Q_DISABLE_COPY(CreatePhoneNumberOrderResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
