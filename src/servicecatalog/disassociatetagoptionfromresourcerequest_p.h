// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETAGOPTIONFROMRESOURCEREQUEST_P_H
#define QTAWS_DISASSOCIATETAGOPTIONFROMRESOURCEREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "disassociatetagoptionfromresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateTagOptionFromResourceRequest;

class DisassociateTagOptionFromResourceRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DisassociateTagOptionFromResourceRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DisassociateTagOptionFromResourceRequest * const q);
    DisassociateTagOptionFromResourceRequestPrivate(const DisassociateTagOptionFromResourceRequestPrivate &other,
                                   DisassociateTagOptionFromResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTagOptionFromResourceRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
