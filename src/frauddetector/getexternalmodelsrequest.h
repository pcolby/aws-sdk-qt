// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTERNALMODELSREQUEST_H
#define QTAWS_GETEXTERNALMODELSREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetExternalModelsRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetExternalModelsRequest : public FraudDetectorRequest {

public:
    GetExternalModelsRequest(const GetExternalModelsRequest &other);
    GetExternalModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExternalModelsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
