// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHUMANLOOPSREQUEST_H
#define QTAWS_LISTHUMANLOOPSREQUEST_H

#include "sagemakera2iruntimerequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class ListHumanLoopsRequestPrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT ListHumanLoopsRequest : public SageMakerA2IRuntimeRequest {

public:
    ListHumanLoopsRequest(const ListHumanLoopsRequest &other);
    ListHumanLoopsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHumanLoopsRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
