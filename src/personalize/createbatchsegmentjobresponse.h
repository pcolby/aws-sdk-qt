// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHSEGMENTJOBRESPONSE_H
#define QTAWS_CREATEBATCHSEGMENTJOBRESPONSE_H

#include "personalizeresponse.h"
#include "createbatchsegmentjobrequest.h"

namespace QtAws {
namespace Personalize {

class CreateBatchSegmentJobResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateBatchSegmentJobResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateBatchSegmentJobResponse(const CreateBatchSegmentJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBatchSegmentJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchSegmentJobResponse)
    Q_DISABLE_COPY(CreateBatchSegmentJobResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
