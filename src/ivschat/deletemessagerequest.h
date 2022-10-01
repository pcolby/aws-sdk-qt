// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGEREQUEST_H
#define QTAWS_DELETEMESSAGEREQUEST_H

#include "ivschatrequest.h"

namespace QtAws {
namespace IvsChat {

class DeleteMessageRequestPrivate;

class QTAWSIVSCHAT_EXPORT DeleteMessageRequest : public IvsChatRequest {

public:
    DeleteMessageRequest(const DeleteMessageRequest &other);
    DeleteMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMessageRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
