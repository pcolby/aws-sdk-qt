// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELVERSIONREQUEST_H
#define QTAWS_GETMODELVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetModelVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetModelVersionRequest : public FraudDetectorRequest {

public:
    GetModelVersionRequest(const GetModelVersionRequest &other);
    GetModelVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
