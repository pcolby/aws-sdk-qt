// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEARCHSUGGESTIONSRESPONSE_H
#define QTAWS_GETSEARCHSUGGESTIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "getsearchsuggestionsrequest.h"

namespace QtAws {
namespace SageMaker {

class GetSearchSuggestionsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT GetSearchSuggestionsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    GetSearchSuggestionsResponse(const GetSearchSuggestionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSearchSuggestionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSearchSuggestionsResponse)
    Q_DISABLE_COPY(GetSearchSuggestionsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
