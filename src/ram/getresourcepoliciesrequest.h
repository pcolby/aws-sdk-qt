// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICIESREQUEST_H
#define QTAWS_GETRESOURCEPOLICIESREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class GetResourcePoliciesRequestPrivate;

class QTAWSRAM_EXPORT GetResourcePoliciesRequest : public RamRequest {

public:
    GetResourcePoliciesRequest(const GetResourcePoliciesRequest &other);
    GetResourcePoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcePoliciesRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
