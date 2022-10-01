// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHRESPONSE_H
#define QTAWS_SEARCHRESPONSE_H

#include "sagemakerresponse.h"
#include "searchrequest.h"

namespace QtAws {
namespace SageMaker {

class SearchResponsePrivate;

class QTAWSSAGEMAKER_EXPORT SearchResponse : public SageMakerResponse {
    Q_OBJECT

public:
    SearchResponse(const SearchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchResponse)
    Q_DISABLE_COPY(SearchResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
