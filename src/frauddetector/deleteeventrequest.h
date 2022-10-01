// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTREQUEST_H
#define QTAWS_DELETEEVENTREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteEventRequest : public FraudDetectorRequest {

public:
    DeleteEventRequest(const DeleteEventRequest &other);
    DeleteEventRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
