// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUSINESSREPORTSCHEDULESREQUEST_H
#define QTAWS_LISTBUSINESSREPORTSCHEDULESREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListBusinessReportSchedulesRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListBusinessReportSchedulesRequest : public AlexaForBusinessRequest {

public:
    ListBusinessReportSchedulesRequest(const ListBusinessReportSchedulesRequest &other);
    ListBusinessReportSchedulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBusinessReportSchedulesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
