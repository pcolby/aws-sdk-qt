// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENGAGEMENTREQUEST_H
#define QTAWS_STOPENGAGEMENTREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class StopEngagementRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT StopEngagementRequest : public SsmContactsRequest {

public:
    StopEngagementRequest(const StopEngagementRequest &other);
    StopEngagementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEngagementRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
