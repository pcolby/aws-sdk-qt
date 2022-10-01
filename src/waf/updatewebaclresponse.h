// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBACLRESPONSE_H
#define QTAWS_UPDATEWEBACLRESPONSE_H

#include "wafresponse.h"
#include "updatewebaclrequest.h"

namespace QtAws {
namespace Waf {

class UpdateWebACLResponsePrivate;

class QTAWSWAF_EXPORT UpdateWebACLResponse : public WafResponse {
    Q_OBJECT

public:
    UpdateWebACLResponse(const UpdateWebACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWebACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWebACLResponse)
    Q_DISABLE_COPY(UpdateWebACLResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
