// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICIESRESPONSE_H
#define QTAWS_GETRESOURCEPOLICIESRESPONSE_H

#include "glueresponse.h"
#include "getresourcepoliciesrequest.h"

namespace QtAws {
namespace Glue {

class GetResourcePoliciesResponsePrivate;

class QTAWSGLUE_EXPORT GetResourcePoliciesResponse : public GlueResponse {
    Q_OBJECT

public:
    GetResourcePoliciesResponse(const GetResourcePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourcePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcePoliciesResponse)
    Q_DISABLE_COPY(GetResourcePoliciesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
