// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPHUMANLOOPREQUEST_H
#define QTAWS_STOPHUMANLOOPREQUEST_H

#include "sagemakera2iruntimerequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class StopHumanLoopRequestPrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT StopHumanLoopRequest : public SageMakerA2IRuntimeRequest {

public:
    StopHumanLoopRequest(const StopHumanLoopRequest &other);
    StopHumanLoopRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopHumanLoopRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
