// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERSHIPREQUEST_H
#define QTAWS_DISASSOCIATEMEMBERSHIPREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class DisassociateMembershipRequestPrivate;

class QTAWSDETECTIVE_EXPORT DisassociateMembershipRequest : public DetectiveRequest {

public:
    DisassociateMembershipRequest(const DisassociateMembershipRequest &other);
    DisassociateMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMembershipRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
