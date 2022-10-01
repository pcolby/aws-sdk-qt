// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUSINESSREPORTSCHEDULEREQUEST_H
#define QTAWS_DELETEBUSINESSREPORTSCHEDULEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteBusinessReportScheduleRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteBusinessReportScheduleRequest : public AlexaForBusinessRequest {

public:
    DeleteBusinessReportScheduleRequest(const DeleteBusinessReportScheduleRequest &other);
    DeleteBusinessReportScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBusinessReportScheduleRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
