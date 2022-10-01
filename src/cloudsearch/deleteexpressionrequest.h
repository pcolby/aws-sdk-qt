// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPRESSIONREQUEST_H
#define QTAWS_DELETEEXPRESSIONREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteExpressionRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DeleteExpressionRequest : public CloudSearchRequest {

public:
    DeleteExpressionRequest(const DeleteExpressionRequest &other);
    DeleteExpressionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExpressionRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
