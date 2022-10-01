// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUSINESSREPORTSCHEDULEREQUEST_H
#define QTAWS_CREATEBUSINESSREPORTSCHEDULEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateBusinessReportScheduleRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateBusinessReportScheduleRequest : public AlexaForBusinessRequest {

public:
    CreateBusinessReportScheduleRequest(const CreateBusinessReportScheduleRequest &other);
    CreateBusinessReportScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBusinessReportScheduleRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
