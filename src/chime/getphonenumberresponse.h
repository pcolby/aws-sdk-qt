// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERRESPONSE_H
#define QTAWS_GETPHONENUMBERRESPONSE_H

#include "chimeresponse.h"
#include "getphonenumberrequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberResponsePrivate;

class QTAWSCHIME_EXPORT GetPhoneNumberResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetPhoneNumberResponse(const GetPhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPhoneNumberResponse)
    Q_DISABLE_COPY(GetPhoneNumberResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
