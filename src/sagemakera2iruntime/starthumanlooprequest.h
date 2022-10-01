// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTHUMANLOOPREQUEST_H
#define QTAWS_STARTHUMANLOOPREQUEST_H

#include "sagemakera2iruntimerequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class StartHumanLoopRequestPrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT StartHumanLoopRequest : public SageMakerA2IRuntimeRequest {

public:
    StartHumanLoopRequest(const StartHumanLoopRequest &other);
    StartHumanLoopRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartHumanLoopRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
