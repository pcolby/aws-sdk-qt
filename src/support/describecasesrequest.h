// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECASESREQUEST_H
#define QTAWS_DESCRIBECASESREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class DescribeCasesRequestPrivate;

class QTAWSSUPPORT_EXPORT DescribeCasesRequest : public SupportRequest {

public:
    DescribeCasesRequest(const DescribeCasesRequest &other);
    DescribeCasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCasesRequest)

};

} // namespace Support
} // namespace QtAws

#endif
