// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKIFPHONENUMBERISOPTEDOUTRESPONSE_H
#define QTAWS_CHECKIFPHONENUMBERISOPTEDOUTRESPONSE_H

#include "snsresponse.h"
#include "checkifphonenumberisoptedoutrequest.h"

namespace QtAws {
namespace Sns {

class CheckIfPhoneNumberIsOptedOutResponsePrivate;

class QTAWSSNS_EXPORT CheckIfPhoneNumberIsOptedOutResponse : public SnsResponse {
    Q_OBJECT

public:
    CheckIfPhoneNumberIsOptedOutResponse(const CheckIfPhoneNumberIsOptedOutRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckIfPhoneNumberIsOptedOutRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckIfPhoneNumberIsOptedOutResponse)
    Q_DISABLE_COPY(CheckIfPhoneNumberIsOptedOutResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
