// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCREATEACCOUNTSTATUSREQUEST_H
#define QTAWS_LISTCREATEACCOUNTSTATUSREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListCreateAccountStatusRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListCreateAccountStatusRequest : public OrganizationsRequest {

public:
    ListCreateAccountStatusRequest(const ListCreateAccountStatusRequest &other);
    ListCreateAccountStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCreateAccountStatusRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
