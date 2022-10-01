// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEARCHSUGGESTIONSREQUEST_H
#define QTAWS_GETSEARCHSUGGESTIONSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class GetSearchSuggestionsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT GetSearchSuggestionsRequest : public SageMakerRequest {

public:
    GetSearchSuggestionsRequest(const GetSearchSuggestionsRequest &other);
    GetSearchSuggestionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSearchSuggestionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
