// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTLABELREQUEST_H
#define QTAWS_UPDATEEVENTLABELREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateEventLabelRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateEventLabelRequest : public FraudDetectorRequest {

public:
    UpdateEventLabelRequest(const UpdateEventLabelRequest &other);
    UpdateEventLabelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventLabelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
