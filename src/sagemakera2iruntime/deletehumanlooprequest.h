// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHUMANLOOPREQUEST_H
#define QTAWS_DELETEHUMANLOOPREQUEST_H

#include "sagemakera2iruntimerequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class DeleteHumanLoopRequestPrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT DeleteHumanLoopRequest : public SageMakerA2IRuntimeRequest {

public:
    DeleteHumanLoopRequest(const DeleteHumanLoopRequest &other);
    DeleteHumanLoopRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHumanLoopRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
