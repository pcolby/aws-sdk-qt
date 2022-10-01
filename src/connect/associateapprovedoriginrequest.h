// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPROVEDORIGINREQUEST_H
#define QTAWS_ASSOCIATEAPPROVEDORIGINREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class AssociateApprovedOriginRequestPrivate;

class QTAWSCONNECT_EXPORT AssociateApprovedOriginRequest : public ConnectRequest {

public:
    AssociateApprovedOriginRequest(const AssociateApprovedOriginRequest &other);
    AssociateApprovedOriginRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApprovedOriginRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
