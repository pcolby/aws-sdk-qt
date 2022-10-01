// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTTYPEREQUEST_H
#define QTAWS_DELETEEVENTTYPEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventTypeRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteEventTypeRequest : public FraudDetectorRequest {

public:
    DeleteEventTypeRequest(const DeleteEventTypeRequest &other);
    DeleteEventTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
