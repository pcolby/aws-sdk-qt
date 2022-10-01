// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETIMELINEEVENTREQUEST_H
#define QTAWS_UPDATETIMELINEEVENTREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateTimelineEventRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateTimelineEventRequest : public SsmIncidentsRequest {

public:
    UpdateTimelineEventRequest(const UpdateTimelineEventRequest &other);
    UpdateTimelineEventRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTimelineEventRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
