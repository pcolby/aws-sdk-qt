// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTIMELINEEVENTSREQUEST_H
#define QTAWS_LISTTIMELINEEVENTSREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListTimelineEventsRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT ListTimelineEventsRequest : public SsmIncidentsRequest {

public:
    ListTimelineEventsRequest(const ListTimelineEventsRequest &other);
    ListTimelineEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTimelineEventsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
