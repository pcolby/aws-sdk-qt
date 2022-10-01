// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATETYPERESPONSE_H
#define QTAWS_ACTIVATETYPERESPONSE_H

#include "cloudformationresponse.h"
#include "activatetyperequest.h"

namespace QtAws {
namespace CloudFormation {

class ActivateTypeResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ActivateTypeResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ActivateTypeResponse(const ActivateTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateTypeResponse)
    Q_DISABLE_COPY(ActivateTypeResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
