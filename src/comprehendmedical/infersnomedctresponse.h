// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERSNOMEDCTRESPONSE_H
#define QTAWS_INFERSNOMEDCTRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "infersnomedctrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferSNOMEDCTResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT InferSNOMEDCTResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    InferSNOMEDCTResponse(const InferSNOMEDCTRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InferSNOMEDCTRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InferSNOMEDCTResponse)
    Q_DISABLE_COPY(InferSNOMEDCTResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
