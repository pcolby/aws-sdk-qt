// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETSUPPRESSIONOPTIONSREQUEST_H
#define QTAWS_PUTCONFIGURATIONSETSUPPRESSIONOPTIONSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetSuppressionOptionsRequestPrivate;

class QTAWSSESV2_EXPORT PutConfigurationSetSuppressionOptionsRequest : public SESv2Request {

public:
    PutConfigurationSetSuppressionOptionsRequest(const PutConfigurationSetSuppressionOptionsRequest &other);
    PutConfigurationSetSuppressionOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetSuppressionOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
