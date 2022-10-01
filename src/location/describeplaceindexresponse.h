// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEINDEXRESPONSE_H
#define QTAWS_DESCRIBEPLACEINDEXRESPONSE_H

#include "locationresponse.h"
#include "describeplaceindexrequest.h"

namespace QtAws {
namespace Location {

class DescribePlaceIndexResponsePrivate;

class QTAWSLOCATION_EXPORT DescribePlaceIndexResponse : public LocationResponse {
    Q_OBJECT

public:
    DescribePlaceIndexResponse(const DescribePlaceIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePlaceIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlaceIndexResponse)
    Q_DISABLE_COPY(DescribePlaceIndexResponse)

};

} // namespace Location
} // namespace QtAws

#endif
