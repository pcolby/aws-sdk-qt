// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLFORRESOURCERESPONSE_H
#define QTAWS_GETWEBACLFORRESOURCERESPONSE_H

#include "wafregionalresponse.h"
#include "getwebaclforresourcerequest.h"

namespace QtAws {
namespace WafRegional {

class GetWebACLForResourceResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetWebACLForResourceResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetWebACLForResourceResponse(const GetWebACLForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWebACLForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWebACLForResourceResponse)
    Q_DISABLE_COPY(GetWebACLForResourceResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
