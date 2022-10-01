// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIAMPOLICYASSIGNMENTRESPONSE_H
#define QTAWS_UPDATEIAMPOLICYASSIGNMENTRESPONSE_H

#include "quicksightresponse.h"
#include "updateiampolicyassignmentrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateIAMPolicyAssignmentResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateIAMPolicyAssignmentResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateIAMPolicyAssignmentResponse(const UpdateIAMPolicyAssignmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIAMPolicyAssignmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIAMPolicyAssignmentResponse)
    Q_DISABLE_COPY(UpdateIAMPolicyAssignmentResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
