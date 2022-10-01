// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBACLRESPONSE_H
#define QTAWS_DISASSOCIATEWEBACLRESPONSE_H

#include "wafregionalresponse.h"
#include "disassociatewebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class DisassociateWebACLResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT DisassociateWebACLResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    DisassociateWebACLResponse(const DisassociateWebACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateWebACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWebACLResponse)
    Q_DISABLE_COPY(DisassociateWebACLResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
