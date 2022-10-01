// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVARIABLESREQUEST_H
#define QTAWS_GETVARIABLESREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetVariablesRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetVariablesRequest : public FraudDetectorRequest {

public:
    GetVariablesRequest(const GetVariablesRequest &other);
    GetVariablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVariablesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
