// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEAUTHEVENTFEEDBACKREQUEST_H
#define QTAWS_ADMINUPDATEAUTHEVENTFEEDBACKREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateAuthEventFeedbackRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminUpdateAuthEventFeedbackRequest : public CognitoIdentityProviderRequest {

public:
    AdminUpdateAuthEventFeedbackRequest(const AdminUpdateAuthEventFeedbackRequest &other);
    AdminUpdateAuthEventFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminUpdateAuthEventFeedbackRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
