// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIAMPOLICYASSIGNMENTREQUEST_H
#define QTAWS_CREATEIAMPOLICYASSIGNMENTREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateIAMPolicyAssignmentRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateIAMPolicyAssignmentRequest : public QuickSightRequest {

public:
    CreateIAMPolicyAssignmentRequest(const CreateIAMPolicyAssignmentRequest &other);
    CreateIAMPolicyAssignmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIAMPolicyAssignmentRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
