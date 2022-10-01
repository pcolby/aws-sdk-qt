// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTPENDINGACTIVITYTASKSREQUEST_H
#define QTAWS_COUNTPENDINGACTIVITYTASKSREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class CountPendingActivityTasksRequestPrivate;

class QTAWSSWF_EXPORT CountPendingActivityTasksRequest : public SwfRequest {

public:
    CountPendingActivityTasksRequest(const CountPendingActivityTasksRequest &other);
    CountPendingActivityTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CountPendingActivityTasksRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
