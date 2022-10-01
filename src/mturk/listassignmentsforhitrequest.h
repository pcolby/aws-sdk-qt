// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSIGNMENTSFORHITREQUEST_H
#define QTAWS_LISTASSIGNMENTSFORHITREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListAssignmentsForHITRequestPrivate;

class QTAWSMTURK_EXPORT ListAssignmentsForHITRequest : public MTurkRequest {

public:
    ListAssignmentsForHITRequest(const ListAssignmentsForHITRequest &other);
    ListAssignmentsForHITRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssignmentsForHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
