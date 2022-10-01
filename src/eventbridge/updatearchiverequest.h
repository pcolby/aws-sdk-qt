// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVEREQUEST_H
#define QTAWS_UPDATEARCHIVEREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class UpdateArchiveRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT UpdateArchiveRequest : public EventBridgeRequest {

public:
    UpdateArchiveRequest(const UpdateArchiveRequest &other);
    UpdateArchiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateArchiveRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
