// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDELEGATEDADMINACCOUNTREQUEST_H
#define QTAWS_DISABLEDELEGATEDADMINACCOUNTREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class DisableDelegatedAdminAccountRequestPrivate;

class QTAWSINSPECTOR2_EXPORT DisableDelegatedAdminAccountRequest : public Inspector2Request {

public:
    DisableDelegatedAdminAccountRequest(const DisableDelegatedAdminAccountRequest &other);
    DisableDelegatedAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableDelegatedAdminAccountRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
