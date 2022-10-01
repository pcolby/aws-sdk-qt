// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERICD10CMRESPONSE_H
#define QTAWS_INFERICD10CMRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "infericd10cmrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferICD10CMResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT InferICD10CMResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    InferICD10CMResponse(const InferICD10CMRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InferICD10CMRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InferICD10CMResponse)
    Q_DISABLE_COPY(InferICD10CMResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
