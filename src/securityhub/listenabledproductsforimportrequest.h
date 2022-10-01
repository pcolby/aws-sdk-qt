// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENABLEDPRODUCTSFORIMPORTREQUEST_H
#define QTAWS_LISTENABLEDPRODUCTSFORIMPORTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class ListEnabledProductsForImportRequestPrivate;

class QTAWSSECURITYHUB_EXPORT ListEnabledProductsForImportRequest : public SecurityHubRequest {

public:
    ListEnabledProductsForImportRequest(const ListEnabledProductsForImportRequest &other);
    ListEnabledProductsForImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnabledProductsForImportRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
