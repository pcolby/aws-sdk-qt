// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDITIONALASSIGNMENTSFORHITREQUEST_H
#define QTAWS_CREATEADDITIONALASSIGNMENTSFORHITREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class CreateAdditionalAssignmentsForHITRequestPrivate;

class QTAWSMTURK_EXPORT CreateAdditionalAssignmentsForHITRequest : public MTurkRequest {

public:
    CreateAdditionalAssignmentsForHITRequest(const CreateAdditionalAssignmentsForHITRequest &other);
    CreateAdditionalAssignmentsForHITRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAdditionalAssignmentsForHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
