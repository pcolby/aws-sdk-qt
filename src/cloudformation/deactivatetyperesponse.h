// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATETYPERESPONSE_H
#define QTAWS_DEACTIVATETYPERESPONSE_H

#include "cloudformationresponse.h"
#include "deactivatetyperequest.h"

namespace QtAws {
namespace CloudFormation {

class DeactivateTypeResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DeactivateTypeResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DeactivateTypeResponse(const DeactivateTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateTypeResponse)
    Q_DISABLE_COPY(DeactivateTypeResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
