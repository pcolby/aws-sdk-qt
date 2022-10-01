// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONVERSATIONREQUEST_H
#define QTAWS_STARTCONVERSATIONREQUEST_H

#include "lexruntimev2request.h"

namespace QtAws {
namespace LexRuntimeV2 {

class StartConversationRequestPrivate;

class QTAWSLEXRUNTIMEV2_EXPORT StartConversationRequest : public LexRuntimeV2Request {

public:
    StartConversationRequest(const StartConversationRequest &other);
    StartConversationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConversationRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
