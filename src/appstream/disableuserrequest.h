// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEUSERREQUEST_H
#define QTAWS_DISABLEUSERREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DisableUserRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DisableUserRequest : public AppStreamRequest {

public:
    DisableUserRequest(const DisableUserRequest &other);
    DisableUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableUserRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
