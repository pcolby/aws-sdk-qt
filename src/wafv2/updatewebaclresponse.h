// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBACLRESPONSE_H
#define QTAWS_UPDATEWEBACLRESPONSE_H

#include "wafv2response.h"
#include "updatewebaclrequest.h"

namespace QtAws {
namespace Wafv2 {

class UpdateWebACLResponsePrivate;

class QTAWSWAFV2_EXPORT UpdateWebACLResponse : public Wafv2Response {
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

} // namespace Wafv2
} // namespace QtAws

#endif
