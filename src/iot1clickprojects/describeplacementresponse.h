// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEMENTRESPONSE_H
#define QTAWS_DESCRIBEPLACEMENTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "describeplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DescribePlacementResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT DescribePlacementResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    DescribePlacementResponse(const DescribePlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlacementResponse)
    Q_DISABLE_COPY(DescribePlacementResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
