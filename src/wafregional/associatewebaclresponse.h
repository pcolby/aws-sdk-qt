// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBACLRESPONSE_H
#define QTAWS_ASSOCIATEWEBACLRESPONSE_H

#include "wafregionalresponse.h"
#include "associatewebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class AssociateWebACLResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT AssociateWebACLResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    AssociateWebACLResponse(const AssociateWebACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateWebACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWebACLResponse)
    Q_DISABLE_COPY(AssociateWebACLResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
