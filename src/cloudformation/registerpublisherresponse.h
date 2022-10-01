// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPUBLISHERRESPONSE_H
#define QTAWS_REGISTERPUBLISHERRESPONSE_H

#include "cloudformationresponse.h"
#include "registerpublisherrequest.h"

namespace QtAws {
namespace CloudFormation {

class RegisterPublisherResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT RegisterPublisherResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    RegisterPublisherResponse(const RegisterPublisherRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterPublisherRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterPublisherResponse)
    Q_DISABLE_COPY(RegisterPublisherResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
