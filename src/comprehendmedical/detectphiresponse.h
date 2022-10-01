// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPHIRESPONSE_H
#define QTAWS_DETECTPHIRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "detectphirequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectPHIResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DetectPHIResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    DetectPHIResponse(const DetectPHIRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectPHIRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectPHIResponse)
    Q_DISABLE_COPY(DetectPHIResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
