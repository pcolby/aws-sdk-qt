// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIAMPOLICYASSIGNMENTRESPONSE_H
#define QTAWS_CREATEIAMPOLICYASSIGNMENTRESPONSE_H

#include "quicksightresponse.h"
#include "createiampolicyassignmentrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateIAMPolicyAssignmentResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateIAMPolicyAssignmentResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateIAMPolicyAssignmentResponse(const CreateIAMPolicyAssignmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIAMPolicyAssignmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIAMPolicyAssignmentResponse)
    Q_DISABLE_COPY(CreateIAMPolicyAssignmentResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
