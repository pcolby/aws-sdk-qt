// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHTOKENREQUEST_H
#define QTAWS_REFRESHTOKENREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class RefreshTokenRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT RefreshTokenRequest : public AmplifyUIBuilderRequest {

public:
    RefreshTokenRequest(const RefreshTokenRequest &other);
    RefreshTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RefreshTokenRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
