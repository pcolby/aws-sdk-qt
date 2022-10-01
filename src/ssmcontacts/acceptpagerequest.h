// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTPAGEREQUEST_H
#define QTAWS_ACCEPTPAGEREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class AcceptPageRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT AcceptPageRequest : public SsmContactsRequest {

public:
    AcceptPageRequest(const AcceptPageRequest &other);
    AcceptPageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptPageRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
