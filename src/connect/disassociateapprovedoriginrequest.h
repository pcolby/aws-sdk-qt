// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPROVEDORIGINREQUEST_H
#define QTAWS_DISASSOCIATEAPPROVEDORIGINREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateApprovedOriginRequestPrivate;

class QTAWSCONNECT_EXPORT DisassociateApprovedOriginRequest : public ConnectRequest {

public:
    DisassociateApprovedOriginRequest(const DisassociateApprovedOriginRequest &other);
    DisassociateApprovedOriginRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateApprovedOriginRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
