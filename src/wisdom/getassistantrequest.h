// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSISTANTREQUEST_H
#define QTAWS_GETASSISTANTREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class GetAssistantRequestPrivate;

class QTAWSWISDOM_EXPORT GetAssistantRequest : public WisdomRequest {

public:
    GetAssistantRequest(const GetAssistantRequest &other);
    GetAssistantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssistantRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
