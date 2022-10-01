// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKRESOURCEDRIFTRESPONSE_H
#define QTAWS_DETECTSTACKRESOURCEDRIFTRESPONSE_H

#include "cloudformationresponse.h"
#include "detectstackresourcedriftrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackResourceDriftResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DetectStackResourceDriftResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DetectStackResourceDriftResponse(const DetectStackResourceDriftRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectStackResourceDriftRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectStackResourceDriftResponse)
    Q_DISABLE_COPY(DetectStackResourceDriftResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
