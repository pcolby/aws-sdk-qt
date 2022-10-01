// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETAGOPTIONFROMRESOURCERESPONSE_P_H
#define QTAWS_DISASSOCIATETAGOPTIONFROMRESOURCERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateTagOptionFromResourceResponse;

class DisassociateTagOptionFromResourceResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DisassociateTagOptionFromResourceResponsePrivate(DisassociateTagOptionFromResourceResponse * const q);

    void parseDisassociateTagOptionFromResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTagOptionFromResourceResponse)
    Q_DISABLE_COPY(DisassociateTagOptionFromResourceResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
