// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADDOCUMENTSRESPONSE_P_H
#define QTAWS_UPLOADDOCUMENTSRESPONSE_P_H

#include "cloudsearchdomainresponse_p.h"

namespace QtAws {
namespace CloudSearchDomain {

class UploadDocumentsResponse;

class UploadDocumentsResponsePrivate : public CloudSearchDomainResponsePrivate {

public:

    explicit UploadDocumentsResponsePrivate(UploadDocumentsResponse * const q);

    void parseUploadDocumentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadDocumentsResponse)
    Q_DISABLE_COPY(UploadDocumentsResponsePrivate)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
