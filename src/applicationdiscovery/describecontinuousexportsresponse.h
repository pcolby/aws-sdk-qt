// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTINUOUSEXPORTSRESPONSE_H
#define QTAWS_DESCRIBECONTINUOUSEXPORTSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "describecontinuousexportsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeContinuousExportsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeContinuousExportsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    DescribeContinuousExportsResponse(const DescribeContinuousExportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeContinuousExportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContinuousExportsResponse)
    Q_DISABLE_COPY(DescribeContinuousExportsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
