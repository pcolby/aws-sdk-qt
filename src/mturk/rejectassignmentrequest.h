// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTASSIGNMENTREQUEST_H
#define QTAWS_REJECTASSIGNMENTREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class RejectAssignmentRequestPrivate;

class QTAWSMTURK_EXPORT RejectAssignmentRequest : public MTurkRequest {

public:
    RejectAssignmentRequest(const RejectAssignmentRequest &other);
    RejectAssignmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectAssignmentRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
