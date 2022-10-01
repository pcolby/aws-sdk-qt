// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEREQUEST_H
#define QTAWS_DELETERULEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteRuleRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteRuleRequest : public FraudDetectorRequest {

public:
    DeleteRuleRequest(const DeleteRuleRequest &other);
    DeleteRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRuleRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
