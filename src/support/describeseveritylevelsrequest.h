// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESEVERITYLEVELSREQUEST_H
#define QTAWS_DESCRIBESEVERITYLEVELSREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class DescribeSeverityLevelsRequestPrivate;

class QTAWSSUPPORT_EXPORT DescribeSeverityLevelsRequest : public SupportRequest {

public:
    DescribeSeverityLevelsRequest(const DescribeSeverityLevelsRequest &other);
    DescribeSeverityLevelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSeverityLevelsRequest)

};

} // namespace Support
} // namespace QtAws

#endif
