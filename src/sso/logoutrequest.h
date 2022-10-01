// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOGOUTREQUEST_H
#define QTAWS_LOGOUTREQUEST_H

#include "ssorequest.h"

namespace QtAws {
namespace Sso {

class LogoutRequestPrivate;

class QTAWSSSO_EXPORT LogoutRequest : public SsoRequest {

public:
    LogoutRequest(const LogoutRequest &other);
    LogoutRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LogoutRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
