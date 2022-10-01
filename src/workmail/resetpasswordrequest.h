// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPASSWORDREQUEST_H
#define QTAWS_RESETPASSWORDREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ResetPasswordRequestPrivate;

class QTAWSWORKMAIL_EXPORT ResetPasswordRequest : public WorkMailRequest {

public:
    ResetPasswordRequest(const ResetPasswordRequest &other);
    ResetPasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetPasswordRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
