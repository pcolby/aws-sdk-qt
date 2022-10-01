// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHREQUEST_H
#define QTAWS_SEARCHREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class SearchRequestPrivate;

class QTAWSSAGEMAKER_EXPORT SearchRequest : public SageMakerRequest {

public:
    SearchRequest(const SearchRequest &other);
    SearchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
