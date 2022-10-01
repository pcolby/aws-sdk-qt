// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELREQUEST_H
#define QTAWS_UPDATEMODELREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateModelRequest : public FraudDetectorRequest {

public:
    UpdateModelRequest(const UpdateModelRequest &other);
    UpdateModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateModelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
