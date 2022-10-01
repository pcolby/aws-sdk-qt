// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDEPLOYMENTRESPONSE_H
#define QTAWS_CANCELDEPLOYMENTRESPONSE_H

#include "greengrassv2response.h"
#include "canceldeploymentrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class CancelDeploymentResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT CancelDeploymentResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    CancelDeploymentResponse(const CancelDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDeploymentResponse)
    Q_DISABLE_COPY(CancelDeploymentResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
