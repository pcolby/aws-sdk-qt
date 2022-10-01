// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTOWORKMAILREQUEST_H
#define QTAWS_REGISTERTOWORKMAILREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class RegisterToWorkMailRequestPrivate;

class QTAWSWORKMAIL_EXPORT RegisterToWorkMailRequest : public WorkMailRequest {

public:
    RegisterToWorkMailRequest(const RegisterToWorkMailRequest &other);
    RegisterToWorkMailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterToWorkMailRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
