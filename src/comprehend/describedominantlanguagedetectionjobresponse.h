// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMINANTLANGUAGEDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBEDOMINANTLANGUAGEDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describedominantlanguagedetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDominantLanguageDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeDominantLanguageDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeDominantLanguageDetectionJobResponse(const DescribeDominantLanguageDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDominantLanguageDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDominantLanguageDetectionJobResponse)
    Q_DISABLE_COPY(DescribeDominantLanguageDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
