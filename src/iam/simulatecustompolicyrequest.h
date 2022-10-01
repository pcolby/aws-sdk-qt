// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIMULATECUSTOMPOLICYREQUEST_H
#define QTAWS_SIMULATECUSTOMPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class SimulateCustomPolicyRequestPrivate;

class QTAWSIAM_EXPORT SimulateCustomPolicyRequest : public IamRequest {

public:
    SimulateCustomPolicyRequest(const SimulateCustomPolicyRequest &other);
    SimulateCustomPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SimulateCustomPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
