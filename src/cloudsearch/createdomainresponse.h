// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINRESPONSE_H
#define QTAWS_CREATEDOMAINRESPONSE_H

#include "cloudsearchresponse.h"
#include "createdomainrequest.h"

namespace QtAws {
namespace CloudSearch {

class CreateDomainResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT CreateDomainResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    CreateDomainResponse(const CreateDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainResponse)
    Q_DISABLE_COPY(CreateDomainResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
