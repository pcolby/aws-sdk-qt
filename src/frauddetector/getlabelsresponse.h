// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLABELSRESPONSE_H
#define QTAWS_GETLABELSRESPONSE_H

#include "frauddetectorresponse.h"
#include "getlabelsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetLabelsResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetLabelsResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetLabelsResponse(const GetLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLabelsResponse)
    Q_DISABLE_COPY(GetLabelsResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
