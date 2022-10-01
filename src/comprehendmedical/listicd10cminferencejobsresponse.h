// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTICD10CMINFERENCEJOBSRESPONSE_H
#define QTAWS_LISTICD10CMINFERENCEJOBSRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "listicd10cminferencejobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListICD10CMInferenceJobsResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListICD10CMInferenceJobsResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    ListICD10CMInferenceJobsResponse(const ListICD10CMInferenceJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListICD10CMInferenceJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListICD10CMInferenceJobsResponse)
    Q_DISABLE_COPY(ListICD10CMInferenceJobsResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
