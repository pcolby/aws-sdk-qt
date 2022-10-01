// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETERMINATIONPROTECTIONRESPONSE_H
#define QTAWS_UPDATETERMINATIONPROTECTIONRESPONSE_H

#include "cloudformationresponse.h"
#include "updateterminationprotectionrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateTerminationProtectionResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT UpdateTerminationProtectionResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    UpdateTerminationProtectionResponse(const UpdateTerminationProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTerminationProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTerminationProtectionResponse)
    Q_DISABLE_COPY(UpdateTerminationProtectionResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
