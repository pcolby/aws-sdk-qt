// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSISTANTREQUEST_H
#define QTAWS_DELETEASSISTANTREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteAssistantRequestPrivate;

class QTAWSWISDOM_EXPORT DeleteAssistantRequest : public WisdomRequest {

public:
    DeleteAssistantRequest(const DeleteAssistantRequest &other);
    DeleteAssistantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssistantRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
