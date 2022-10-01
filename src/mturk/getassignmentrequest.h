// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSIGNMENTREQUEST_H
#define QTAWS_GETASSIGNMENTREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class GetAssignmentRequestPrivate;

class QTAWSMTURK_EXPORT GetAssignmentRequest : public MTurkRequest {

public:
    GetAssignmentRequest(const GetAssignmentRequest &other);
    GetAssignmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssignmentRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
