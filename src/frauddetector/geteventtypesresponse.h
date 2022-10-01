// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTTYPESRESPONSE_H
#define QTAWS_GETEVENTTYPESRESPONSE_H

#include "frauddetectorresponse.h"
#include "geteventtypesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventTypesResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEventTypesResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetEventTypesResponse(const GetEventTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventTypesResponse)
    Q_DISABLE_COPY(GetEventTypesResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
