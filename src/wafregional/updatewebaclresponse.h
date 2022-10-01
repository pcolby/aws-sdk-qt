// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBACLRESPONSE_H
#define QTAWS_UPDATEWEBACLRESPONSE_H

#include "wafregionalresponse.h"
#include "updatewebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateWebACLResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateWebACLResponse : public WafRegionalResponse {
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

} // namespace WafRegional
} // namespace QtAws

#endif
