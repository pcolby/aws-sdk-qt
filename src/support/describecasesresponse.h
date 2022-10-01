// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECASESRESPONSE_H
#define QTAWS_DESCRIBECASESRESPONSE_H

#include "supportresponse.h"
#include "describecasesrequest.h"

namespace QtAws {
namespace Support {

class DescribeCasesResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeCasesResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeCasesResponse(const DescribeCasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCasesResponse)
    Q_DISABLE_COPY(DescribeCasesResponse)

};

} // namespace Support
} // namespace QtAws

#endif
