// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONFIGRESPONSE_H
#define QTAWS_UPDATEDOMAINCONFIGRESPONSE_H

#include "opensearchresponse.h"
#include "updatedomainconfigrequest.h"

namespace QtAws {
namespace OpenSearch {

class UpdateDomainConfigResponsePrivate;

class QTAWSOPENSEARCH_EXPORT UpdateDomainConfigResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    UpdateDomainConfigResponse(const UpdateDomainConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainConfigResponse)
    Q_DISABLE_COPY(UpdateDomainConfigResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
