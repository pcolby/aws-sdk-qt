// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUGGESTRESPONSE_H
#define QTAWS_SUGGESTRESPONSE_H

#include "cloudsearchdomainresponse.h"
#include "suggestrequest.h"

namespace QtAws {
namespace CloudSearchDomain {

class SuggestResponsePrivate;

class QTAWSCLOUDSEARCHDOMAIN_EXPORT SuggestResponse : public CloudSearchDomainResponse {
    Q_OBJECT

public:
    SuggestResponse(const SuggestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SuggestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SuggestResponse)
    Q_DISABLE_COPY(SuggestResponse)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
