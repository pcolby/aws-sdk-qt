// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRXNORMINFERENCEJOBSRESPONSE_H
#define QTAWS_LISTRXNORMINFERENCEJOBSRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "listrxnorminferencejobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListRxNormInferenceJobsResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListRxNormInferenceJobsResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    ListRxNormInferenceJobsResponse(const ListRxNormInferenceJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRxNormInferenceJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRxNormInferenceJobsResponse)
    Q_DISABLE_COPY(ListRxNormInferenceJobsResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
