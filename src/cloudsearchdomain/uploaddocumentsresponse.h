// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADDOCUMENTSRESPONSE_H
#define QTAWS_UPLOADDOCUMENTSRESPONSE_H

#include "cloudsearchdomainresponse.h"
#include "uploaddocumentsrequest.h"

namespace QtAws {
namespace CloudSearchDomain {

class UploadDocumentsResponsePrivate;

class QTAWSCLOUDSEARCHDOMAIN_EXPORT UploadDocumentsResponse : public CloudSearchDomainResponse {
    Q_OBJECT

public:
    UploadDocumentsResponse(const UploadDocumentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadDocumentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadDocumentsResponse)
    Q_DISABLE_COPY(UploadDocumentsResponse)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
