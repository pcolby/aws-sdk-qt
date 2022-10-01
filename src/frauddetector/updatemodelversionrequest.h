// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELVERSIONREQUEST_H
#define QTAWS_UPDATEMODELVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateModelVersionRequest : public FraudDetectorRequest {

public:
    UpdateModelVersionRequest(const UpdateModelVersionRequest &other);
    UpdateModelVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateModelVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
