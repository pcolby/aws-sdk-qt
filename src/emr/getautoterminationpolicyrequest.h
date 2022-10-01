// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOTERMINATIONPOLICYREQUEST_H
#define QTAWS_GETAUTOTERMINATIONPOLICYREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class GetAutoTerminationPolicyRequestPrivate;

class QTAWSEMR_EXPORT GetAutoTerminationPolicyRequest : public EmrRequest {

public:
    GetAutoTerminationPolicyRequest(const GetAutoTerminationPolicyRequest &other);
    GetAutoTerminationPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAutoTerminationPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
