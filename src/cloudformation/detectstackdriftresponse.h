// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKDRIFTRESPONSE_H
#define QTAWS_DETECTSTACKDRIFTRESPONSE_H

#include "cloudformationresponse.h"
#include "detectstackdriftrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackDriftResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DetectStackDriftResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DetectStackDriftResponse(const DetectStackDriftRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectStackDriftRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectStackDriftResponse)
    Q_DISABLE_COPY(DetectStackDriftResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
