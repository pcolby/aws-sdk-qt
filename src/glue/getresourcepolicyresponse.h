// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICYRESPONSE_H
#define QTAWS_GETRESOURCEPOLICYRESPONSE_H

#include "glueresponse.h"
#include "getresourcepolicyrequest.h"

namespace QtAws {
namespace Glue {

class GetResourcePolicyResponsePrivate;

class QTAWSGLUE_EXPORT GetResourcePolicyResponse : public GlueResponse {
    Q_OBJECT

public:
    GetResourcePolicyResponse(const GetResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcePolicyResponse)
    Q_DISABLE_COPY(GetResourcePolicyResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
