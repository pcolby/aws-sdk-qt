// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTPENDINGDECISIONTASKSREQUEST_H
#define QTAWS_COUNTPENDINGDECISIONTASKSREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class CountPendingDecisionTasksRequestPrivate;

class QTAWSSWF_EXPORT CountPendingDecisionTasksRequest : public SwfRequest {

public:
    CountPendingDecisionTasksRequest(const CountPendingDecisionTasksRequest &other);
    CountPendingDecisionTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CountPendingDecisionTasksRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
