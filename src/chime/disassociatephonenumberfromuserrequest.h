// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERFROMUSERREQUEST_H
#define QTAWS_DISASSOCIATEPHONENUMBERFROMUSERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumberFromUserRequestPrivate;

class QTAWSCHIME_EXPORT DisassociatePhoneNumberFromUserRequest : public ChimeRequest {

public:
    DisassociatePhoneNumberFromUserRequest(const DisassociatePhoneNumberFromUserRequest &other);
    DisassociatePhoneNumberFromUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePhoneNumberFromUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
