// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBACLRESPONSE_H
#define QTAWS_DELETEWEBACLRESPONSE_H

#include "wafresponse.h"
#include "deletewebaclrequest.h"

namespace QtAws {
namespace Waf {

class DeleteWebACLResponsePrivate;

class QTAWSWAF_EXPORT DeleteWebACLResponse : public WafResponse {
    Q_OBJECT

public:
    DeleteWebACLResponse(const DeleteWebACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWebACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWebACLResponse)
    Q_DISABLE_COPY(DeleteWebACLResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
