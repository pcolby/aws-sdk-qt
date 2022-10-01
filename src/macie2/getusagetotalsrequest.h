// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGETOTALSREQUEST_H
#define QTAWS_GETUSAGETOTALSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetUsageTotalsRequestPrivate;

class QTAWSMACIE2_EXPORT GetUsageTotalsRequest : public Macie2Request {

public:
    GetUsageTotalsRequest(const GetUsageTotalsRequest &other);
    GetUsageTotalsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageTotalsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
