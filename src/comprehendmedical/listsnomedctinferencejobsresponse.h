// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNOMEDCTINFERENCEJOBSRESPONSE_H
#define QTAWS_LISTSNOMEDCTINFERENCEJOBSRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "listsnomedctinferencejobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListSNOMEDCTInferenceJobsResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListSNOMEDCTInferenceJobsResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    ListSNOMEDCTInferenceJobsResponse(const ListSNOMEDCTInferenceJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSNOMEDCTInferenceJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSNOMEDCTInferenceJobsResponse)
    Q_DISABLE_COPY(ListSNOMEDCTInferenceJobsResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
