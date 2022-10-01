// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPTINPHONENUMBERRESPONSE_H
#define QTAWS_OPTINPHONENUMBERRESPONSE_H

#include "snsresponse.h"
#include "optinphonenumberrequest.h"

namespace QtAws {
namespace Sns {

class OptInPhoneNumberResponsePrivate;

class QTAWSSNS_EXPORT OptInPhoneNumberResponse : public SnsResponse {
    Q_OBJECT

public:
    OptInPhoneNumberResponse(const OptInPhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const OptInPhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OptInPhoneNumberResponse)
    Q_DISABLE_COPY(OptInPhoneNumberResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
