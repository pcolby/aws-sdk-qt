// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLFORRESOURCERESPONSE_H
#define QTAWS_GETWEBACLFORRESOURCERESPONSE_H

#include "wafv2response.h"
#include "getwebaclforresourcerequest.h"

namespace QtAws {
namespace Wafv2 {

class GetWebACLForResourceResponsePrivate;

class QTAWSWAFV2_EXPORT GetWebACLForResourceResponse : public Wafv2Response {
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

} // namespace Wafv2
} // namespace QtAws

#endif
