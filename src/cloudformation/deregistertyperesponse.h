// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTYPERESPONSE_H
#define QTAWS_DEREGISTERTYPERESPONSE_H

#include "cloudformationresponse.h"
#include "deregistertyperequest.h"

namespace QtAws {
namespace CloudFormation {

class DeregisterTypeResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DeregisterTypeResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DeregisterTypeResponse(const DeregisterTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTypeResponse)
    Q_DISABLE_COPY(DeregisterTypeResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
