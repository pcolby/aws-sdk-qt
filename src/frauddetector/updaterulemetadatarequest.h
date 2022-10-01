// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEMETADATAREQUEST_H
#define QTAWS_UPDATERULEMETADATAREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateRuleMetadataRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateRuleMetadataRequest : public FraudDetectorRequest {

public:
    UpdateRuleMetadataRequest(const UpdateRuleMetadataRequest &other);
    UpdateRuleMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleMetadataRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
