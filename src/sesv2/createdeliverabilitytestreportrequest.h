// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERABILITYTESTREPORTREQUEST_H
#define QTAWS_CREATEDELIVERABILITYTESTREPORTREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateDeliverabilityTestReportRequestPrivate;

class QTAWSSESV2_EXPORT CreateDeliverabilityTestReportRequest : public SESv2Request {

public:
    CreateDeliverabilityTestReportRequest(const CreateDeliverabilityTestReportRequest &other);
    CreateDeliverabilityTestReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeliverabilityTestReportRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
