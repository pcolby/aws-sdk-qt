// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSISTANTASSOCIATIONREQUEST_H
#define QTAWS_DELETEASSISTANTASSOCIATIONREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteAssistantAssociationRequestPrivate;

class QTAWSWISDOM_EXPORT DeleteAssistantAssociationRequest : public WisdomRequest {

public:
    DeleteAssistantAssociationRequest(const DeleteAssistantAssociationRequest &other);
    DeleteAssistantAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssistantAssociationRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
