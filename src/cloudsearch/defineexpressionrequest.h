// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEEXPRESSIONREQUEST_H
#define QTAWS_DEFINEEXPRESSIONREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineExpressionRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DefineExpressionRequest : public CloudSearchRequest {

public:
    DefineExpressionRequest(const DefineExpressionRequest &other);
    DefineExpressionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DefineExpressionRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
