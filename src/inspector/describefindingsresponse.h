// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFINDINGSRESPONSE_H
#define QTAWS_DESCRIBEFINDINGSRESPONSE_H

#include "inspectorresponse.h"
#include "describefindingsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeFindingsResponsePrivate;

class QTAWSINSPECTOR_EXPORT DescribeFindingsResponse : public InspectorResponse {
    Q_OBJECT

public:
    DescribeFindingsResponse(const DescribeFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFindingsResponse)
    Q_DISABLE_COPY(DescribeFindingsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
