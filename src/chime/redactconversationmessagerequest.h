// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCONVERSATIONMESSAGEREQUEST_H
#define QTAWS_REDACTCONVERSATIONMESSAGEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class RedactConversationMessageRequestPrivate;

class QTAWSCHIME_EXPORT RedactConversationMessageRequest : public ChimeRequest {

public:
    RedactConversationMessageRequest(const RedactConversationMessageRequest &other);
    RedactConversationMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedactConversationMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
