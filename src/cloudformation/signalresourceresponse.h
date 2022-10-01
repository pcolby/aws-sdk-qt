// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNALRESOURCERESPONSE_H
#define QTAWS_SIGNALRESOURCERESPONSE_H

#include "cloudformationresponse.h"
#include "signalresourcerequest.h"

namespace QtAws {
namespace CloudFormation {

class SignalResourceResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT SignalResourceResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    SignalResourceResponse(const SignalResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SignalResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignalResourceResponse)
    Q_DISABLE_COPY(SignalResourceResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
