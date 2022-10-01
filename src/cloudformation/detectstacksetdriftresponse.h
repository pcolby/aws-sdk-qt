// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKSETDRIFTRESPONSE_H
#define QTAWS_DETECTSTACKSETDRIFTRESPONSE_H

#include "cloudformationresponse.h"
#include "detectstacksetdriftrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackSetDriftResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DetectStackSetDriftResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DetectStackSetDriftResponse(const DetectStackSetDriftRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectStackSetDriftRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectStackSetDriftResponse)
    Q_DISABLE_COPY(DetectStackSetDriftResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
