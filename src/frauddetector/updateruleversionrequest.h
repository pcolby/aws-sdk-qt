// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEVERSIONREQUEST_H
#define QTAWS_UPDATERULEVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateRuleVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateRuleVersionRequest : public FraudDetectorRequest {

public:
    UpdateRuleVersionRequest(const UpdateRuleVersionRequest &other);
    UpdateRuleVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
