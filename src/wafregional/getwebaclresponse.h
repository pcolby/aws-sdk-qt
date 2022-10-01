// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLRESPONSE_H
#define QTAWS_GETWEBACLRESPONSE_H

#include "wafregionalresponse.h"
#include "getwebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class GetWebACLResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetWebACLResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetWebACLResponse(const GetWebACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWebACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWebACLResponse)
    Q_DISABLE_COPY(GetWebACLResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
