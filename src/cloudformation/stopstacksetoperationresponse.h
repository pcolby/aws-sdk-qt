// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTACKSETOPERATIONRESPONSE_H
#define QTAWS_STOPSTACKSETOPERATIONRESPONSE_H

#include "cloudformationresponse.h"
#include "stopstacksetoperationrequest.h"

namespace QtAws {
namespace CloudFormation {

class StopStackSetOperationResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT StopStackSetOperationResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    StopStackSetOperationResponse(const StopStackSetOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopStackSetOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStackSetOperationResponse)
    Q_DISABLE_COPY(StopStackSetOperationResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
