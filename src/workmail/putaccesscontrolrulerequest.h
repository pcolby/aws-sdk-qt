// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSCONTROLRULEREQUEST_H
#define QTAWS_PUTACCESSCONTROLRULEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class PutAccessControlRuleRequestPrivate;

class QTAWSWORKMAIL_EXPORT PutAccessControlRuleRequest : public WorkMailRequest {

public:
    PutAccessControlRuleRequest(const PutAccessControlRuleRequest &other);
    PutAccessControlRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccessControlRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
