// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEALLBACKENDSREQUEST_H
#define QTAWS_REMOVEALLBACKENDSREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class RemoveAllBackendsRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT RemoveAllBackendsRequest : public AmplifyBackendRequest {

public:
    RemoveAllBackendsRequest(const RemoveAllBackendsRequest &other);
    RemoveAllBackendsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAllBackendsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
