// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETIMELINEEVENTREQUEST_H
#define QTAWS_DELETETIMELINEEVENTREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteTimelineEventRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT DeleteTimelineEventRequest : public SsmIncidentsRequest {

public:
    DeleteTimelineEventRequest(const DeleteTimelineEventRequest &other);
    DeleteTimelineEventRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTimelineEventRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
