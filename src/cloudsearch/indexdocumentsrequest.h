// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INDEXDOCUMENTSREQUEST_H
#define QTAWS_INDEXDOCUMENTSREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class IndexDocumentsRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT IndexDocumentsRequest : public CloudSearchRequest {

public:
    IndexDocumentsRequest(const IndexDocumentsRequest &other);
    IndexDocumentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IndexDocumentsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
