// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINESUGGESTERRESPONSE_H
#define QTAWS_DEFINESUGGESTERRESPONSE_H

#include "cloudsearchresponse.h"
#include "definesuggesterrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineSuggesterResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DefineSuggesterResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DefineSuggesterResponse(const DefineSuggesterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DefineSuggesterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DefineSuggesterResponse)
    Q_DISABLE_COPY(DefineSuggesterResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
