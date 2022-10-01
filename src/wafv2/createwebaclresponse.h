// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLRESPONSE_H
#define QTAWS_CREATEWEBACLRESPONSE_H

#include "wafv2response.h"
#include "createwebaclrequest.h"

namespace QtAws {
namespace Wafv2 {

class CreateWebACLResponsePrivate;

class QTAWSWAFV2_EXPORT CreateWebACLResponse : public Wafv2Response {
    Q_OBJECT

public:
    CreateWebACLResponse(const CreateWebACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWebACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebACLResponse)
    Q_DISABLE_COPY(CreateWebACLResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
