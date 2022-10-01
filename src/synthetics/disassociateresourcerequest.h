// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCEREQUEST_H
#define QTAWS_DISASSOCIATERESOURCEREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class DisassociateResourceRequestPrivate;

class QTAWSSYNTHETICS_EXPORT DisassociateResourceRequest : public SyntheticsRequest {

public:
    DisassociateResourceRequest(const DisassociateResourceRequest &other);
    DisassociateResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResourceRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
