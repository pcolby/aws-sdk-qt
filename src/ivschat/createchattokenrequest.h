// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHATTOKENREQUEST_H
#define QTAWS_CREATECHATTOKENREQUEST_H

#include "ivschatrequest.h"

namespace QtAws {
namespace IvsChat {

class CreateChatTokenRequestPrivate;

class QTAWSIVSCHAT_EXPORT CreateChatTokenRequest : public IvsChatRequest {

public:
    CreateChatTokenRequest(const CreateChatTokenRequest &other);
    CreateChatTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChatTokenRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
