// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATENODEREQUEST_H
#define QTAWS_DISASSOCIATENODEREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DisassociateNodeRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT DisassociateNodeRequest : public OpsWorksCmRequest {

public:
    DisassociateNodeRequest(const DisassociateNodeRequest &other);
    DisassociateNodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateNodeRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
