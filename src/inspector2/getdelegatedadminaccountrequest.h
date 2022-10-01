// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELEGATEDADMINACCOUNTREQUEST_H
#define QTAWS_GETDELEGATEDADMINACCOUNTREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class GetDelegatedAdminAccountRequestPrivate;

class QTAWSINSPECTOR2_EXPORT GetDelegatedAdminAccountRequest : public Inspector2Request {

public:
    GetDelegatedAdminAccountRequest(const GetDelegatedAdminAccountRequest &other);
    GetDelegatedAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDelegatedAdminAccountRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
