// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERABILITYTESTREPORTSREQUEST_H
#define QTAWS_LISTDELIVERABILITYTESTREPORTSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class ListDeliverabilityTestReportsRequestPrivate;

class QTAWSSESV2_EXPORT ListDeliverabilityTestReportsRequest : public SESv2Request {

public:
    ListDeliverabilityTestReportsRequest(const ListDeliverabilityTestReportsRequest &other);
    ListDeliverabilityTestReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeliverabilityTestReportsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
