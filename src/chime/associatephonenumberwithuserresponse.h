// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERWITHUSERRESPONSE_H
#define QTAWS_ASSOCIATEPHONENUMBERWITHUSERRESPONSE_H

#include "chimeresponse.h"
#include "associatephonenumberwithuserrequest.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumberWithUserResponsePrivate;

class QTAWSCHIME_EXPORT AssociatePhoneNumberWithUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    AssociatePhoneNumberWithUserResponse(const AssociatePhoneNumberWithUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociatePhoneNumberWithUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePhoneNumberWithUserResponse)
    Q_DISABLE_COPY(AssociatePhoneNumberWithUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
