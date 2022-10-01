// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICIESREQUEST_H
#define QTAWS_GETRESOURCEPOLICIESREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetResourcePoliciesRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT GetResourcePoliciesRequest : public SsmIncidentsRequest {

public:
    GetResourcePoliciesRequest(const GetResourcePoliciesRequest &other);
    GetResourcePoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcePoliciesRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
