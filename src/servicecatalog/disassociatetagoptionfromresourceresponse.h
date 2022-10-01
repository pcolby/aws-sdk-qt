// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETAGOPTIONFROMRESOURCERESPONSE_H
#define QTAWS_DISASSOCIATETAGOPTIONFROMRESOURCERESPONSE_H

#include "servicecatalogresponse.h"
#include "disassociatetagoptionfromresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateTagOptionFromResourceResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DisassociateTagOptionFromResourceResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DisassociateTagOptionFromResourceResponse(const DisassociateTagOptionFromResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTagOptionFromResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTagOptionFromResourceResponse)
    Q_DISABLE_COPY(DisassociateTagOptionFromResourceResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
