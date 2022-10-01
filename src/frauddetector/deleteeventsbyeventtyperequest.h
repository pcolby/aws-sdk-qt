// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSBYEVENTTYPEREQUEST_H
#define QTAWS_DELETEEVENTSBYEVENTTYPEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventsByEventTypeRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteEventsByEventTypeRequest : public FraudDetectorRequest {

public:
    DeleteEventsByEventTypeRequest(const DeleteEventsByEventTypeRequest &other);
    DeleteEventsByEventTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventsByEventTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
