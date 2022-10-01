// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPROVEASSIGNMENTREQUEST_H
#define QTAWS_APPROVEASSIGNMENTREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ApproveAssignmentRequestPrivate;

class QTAWSMTURK_EXPORT ApproveAssignmentRequest : public MTurkRequest {

public:
    ApproveAssignmentRequest(const ApproveAssignmentRequest &other);
    ApproveAssignmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApproveAssignmentRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
