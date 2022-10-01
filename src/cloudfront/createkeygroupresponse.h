// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYGROUPRESPONSE_H
#define QTAWS_CREATEKEYGROUPRESPONSE_H

#include "cloudfrontresponse.h"
#include "createkeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class CreateKeyGroupResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateKeyGroupResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateKeyGroupResponse(const CreateKeyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateKeyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeyGroupResponse)
    Q_DISABLE_COPY(CreateKeyGroupResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
