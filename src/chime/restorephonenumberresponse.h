// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREPHONENUMBERRESPONSE_H
#define QTAWS_RESTOREPHONENUMBERRESPONSE_H

#include "chimeresponse.h"
#include "restorephonenumberrequest.h"

namespace QtAws {
namespace Chime {

class RestorePhoneNumberResponsePrivate;

class QTAWSCHIME_EXPORT RestorePhoneNumberResponse : public ChimeResponse {
    Q_OBJECT

public:
    RestorePhoneNumberResponse(const RestorePhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestorePhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestorePhoneNumberResponse)
    Q_DISABLE_COPY(RestorePhoneNumberResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
