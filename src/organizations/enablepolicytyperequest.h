// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPOLICYTYPEREQUEST_H
#define QTAWS_ENABLEPOLICYTYPEREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class EnablePolicyTypeRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT EnablePolicyTypeRequest : public OrganizationsRequest {

public:
    EnablePolicyTypeRequest(const EnablePolicyTypeRequest &other);
    EnablePolicyTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnablePolicyTypeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
