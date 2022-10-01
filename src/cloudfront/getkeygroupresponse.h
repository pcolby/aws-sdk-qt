// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYGROUPRESPONSE_H
#define QTAWS_GETKEYGROUPRESPONSE_H

#include "cloudfrontresponse.h"
#include "getkeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class GetKeyGroupResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetKeyGroupResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetKeyGroupResponse(const GetKeyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKeyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyGroupResponse)
    Q_DISABLE_COPY(GetKeyGroupResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
