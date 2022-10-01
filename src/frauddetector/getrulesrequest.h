// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULESREQUEST_H
#define QTAWS_GETRULESREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetRulesRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetRulesRequest : public FraudDetectorRequest {

public:
    GetRulesRequest(const GetRulesRequest &other);
    GetRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRulesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
