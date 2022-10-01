// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERFROMUSERRESPONSE_H
#define QTAWS_DISASSOCIATEPHONENUMBERFROMUSERRESPONSE_H

#include "chimeresponse.h"
#include "disassociatephonenumberfromuserrequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumberFromUserResponsePrivate;

class QTAWSCHIME_EXPORT DisassociatePhoneNumberFromUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    DisassociatePhoneNumberFromUserResponse(const DisassociatePhoneNumberFromUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociatePhoneNumberFromUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePhoneNumberFromUserResponse)
    Q_DISABLE_COPY(DisassociatePhoneNumberFromUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
