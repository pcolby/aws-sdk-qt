// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGETOTALSREQUEST_H
#define QTAWS_LISTUSAGETOTALSREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class ListUsageTotalsRequestPrivate;

class QTAWSINSPECTOR2_EXPORT ListUsageTotalsRequest : public Inspector2Request {

public:
    ListUsageTotalsRequest(const ListUsageTotalsRequest &other);
    ListUsageTotalsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsageTotalsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
