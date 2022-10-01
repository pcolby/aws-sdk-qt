// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDELEGATEDADMINACCOUNTREQUEST_H
#define QTAWS_ENABLEDELEGATEDADMINACCOUNTREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class EnableDelegatedAdminAccountRequestPrivate;

class QTAWSINSPECTOR2_EXPORT EnableDelegatedAdminAccountRequest : public Inspector2Request {

public:
    EnableDelegatedAdminAccountRequest(const EnableDelegatedAdminAccountRequest &other);
    EnableDelegatedAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDelegatedAdminAccountRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
