// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHSEGMENTJOBRESPONSE_H
#define QTAWS_DESCRIBEBATCHSEGMENTJOBRESPONSE_H

#include "personalizeresponse.h"
#include "describebatchsegmentjobrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeBatchSegmentJobResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeBatchSegmentJobResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeBatchSegmentJobResponse(const DescribeBatchSegmentJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBatchSegmentJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBatchSegmentJobResponse)
    Q_DISABLE_COPY(DescribeBatchSegmentJobResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
