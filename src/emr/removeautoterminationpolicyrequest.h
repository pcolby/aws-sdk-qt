// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAUTOTERMINATIONPOLICYREQUEST_H
#define QTAWS_REMOVEAUTOTERMINATIONPOLICYREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class RemoveAutoTerminationPolicyRequestPrivate;

class QTAWSEMR_EXPORT RemoveAutoTerminationPolicyRequest : public EmrRequest {

public:
    RemoveAutoTerminationPolicyRequest(const RemoveAutoTerminationPolicyRequest &other);
    RemoveAutoTerminationPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAutoTerminationPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
