// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNOUTUSERREQUEST_H
#define QTAWS_SIGNOUTUSERREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class SignOutUserRequestPrivate;

class QTAWSWORKLINK_EXPORT SignOutUserRequest : public WorkLinkRequest {

public:
    SignOutUserRequest(const SignOutUserRequest &other);
    SignOutUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignOutUserRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
