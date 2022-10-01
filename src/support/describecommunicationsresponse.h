// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMUNICATIONSRESPONSE_H
#define QTAWS_DESCRIBECOMMUNICATIONSRESPONSE_H

#include "supportresponse.h"
#include "describecommunicationsrequest.h"

namespace QtAws {
namespace Support {

class DescribeCommunicationsResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeCommunicationsResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeCommunicationsResponse(const DescribeCommunicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCommunicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCommunicationsResponse)
    Q_DISABLE_COPY(DescribeCommunicationsResponse)

};

} // namespace Support
} // namespace QtAws

#endif
