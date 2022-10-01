// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERFROMWORKMAILREQUEST_H
#define QTAWS_DEREGISTERFROMWORKMAILREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeregisterFromWorkMailRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeregisterFromWorkMailRequest : public WorkMailRequest {

public:
    DeregisterFromWorkMailRequest(const DeregisterFromWorkMailRequest &other);
    DeregisterFromWorkMailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterFromWorkMailRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
