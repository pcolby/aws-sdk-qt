// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHTRUSTEDADVISORCHECKREQUEST_H
#define QTAWS_REFRESHTRUSTEDADVISORCHECKREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class RefreshTrustedAdvisorCheckRequestPrivate;

class QTAWSSUPPORT_EXPORT RefreshTrustedAdvisorCheckRequest : public SupportRequest {

public:
    RefreshTrustedAdvisorCheckRequest(const RefreshTrustedAdvisorCheckRequest &other);
    RefreshTrustedAdvisorCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RefreshTrustedAdvisorCheckRequest)

};

} // namespace Support
} // namespace QtAws

#endif
