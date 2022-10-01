// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCESHAREREQUEST_H
#define QTAWS_DISASSOCIATERESOURCESHAREREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class DisassociateResourceShareRequestPrivate;

class QTAWSRAM_EXPORT DisassociateResourceShareRequest : public RamRequest {

public:
    DisassociateResourceShareRequest(const DisassociateResourceShareRequest &other);
    DisassociateResourceShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
