// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETTRACESRESPONSE_H
#define QTAWS_BATCHGETTRACESRESPONSE_H

#include "xrayresponse.h"
#include "batchgettracesrequest.h"

namespace QtAws {
namespace XRay {

class BatchGetTracesResponsePrivate;

class QTAWSXRAY_EXPORT BatchGetTracesResponse : public XRayResponse {
    Q_OBJECT

public:
    BatchGetTracesResponse(const BatchGetTracesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetTracesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetTracesResponse)
    Q_DISABLE_COPY(BatchGetTracesResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
