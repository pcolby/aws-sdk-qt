// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTCOMESREQUEST_H
#define QTAWS_GETOUTCOMESREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetOutcomesRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetOutcomesRequest : public FraudDetectorRequest {

public:
    GetOutcomesRequest(const GetOutcomesRequest &other);
    GetOutcomesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOutcomesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
