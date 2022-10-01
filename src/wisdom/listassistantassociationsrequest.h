// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSISTANTASSOCIATIONSREQUEST_H
#define QTAWS_LISTASSISTANTASSOCIATIONSREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class ListAssistantAssociationsRequestPrivate;

class QTAWSWISDOM_EXPORT ListAssistantAssociationsRequest : public WisdomRequest {

public:
    ListAssistantAssociationsRequest(const ListAssistantAssociationsRequest &other);
    ListAssistantAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssistantAssociationsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
