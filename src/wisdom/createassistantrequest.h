// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSISTANTREQUEST_H
#define QTAWS_CREATEASSISTANTREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateAssistantRequestPrivate;

class QTAWSWISDOM_EXPORT CreateAssistantRequest : public WisdomRequest {

public:
    CreateAssistantRequest(const CreateAssistantRequest &other);
    CreateAssistantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssistantRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
